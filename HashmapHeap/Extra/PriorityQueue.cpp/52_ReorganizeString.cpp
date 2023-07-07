// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         char ch;
//         int freq;
//         Pair(char ch, int freq)
//         {
//             this->ch = ch;
//             this->freq = freq;
//         }
//     };
//     class comp
//     {
//     public:
//         bool operator()(Pair *a, Pair *b)
//         {
//             return a->freq < b->freq;
//         }
//     };
//     string reorganizeString(string s)
//     {
//         unordered_map<char, int> mp;
//         for (int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]]++;
//         }
//         priority_queue<Pair *, vector<Pair *>, comp> pq;
//         for (auto val : mp)
//         {
//             pq.push(new Pair(val.first, val.second));
//         }
//         string ans = string(s.size(), '.');
//         int i = 1;
//         Pair *blocker = pq.top();
//         ans[0] = blocker->ch;
//         blocker->freq--;
//         pq.pop();
//         while (pq.size() > 0)
//         {
//             Pair *top = pq.top();
//             pq.pop();
//             char ch = top->ch;
//             ans[i] = ch;
//             if (blocker->freq > 0)
//             {
//                 pq.push(blocker);
//             }
//             top->freq--;
//             blocker = top;
//             i++;
//         }
//         if (blocker->freq > 0)
//         {
//             return "";
//         }
//         return ans;
//         return ans;
//     }
// };