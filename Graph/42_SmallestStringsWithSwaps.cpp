// class Solution
// {
// public:
//     int find(int x, vector<int> &par)
//     {
//         if (x == par[x])
//         {
//             return x;
//         }
//         par[x] = find(par[x], par);
//         return par[x];
//     }

//     void merge(int x, int y, vector<int> &par, vector<int> &rank)
//     {

//         if (rank[x] > rank[y])
//         {
//             par[y] = x;
//         }
//         else if (rank[y] > rank[x])
//         {
//             par[x] = y;
//         }
//         else
//         {
//             par[x] = y;
//             rank[y]++;
//         }
//     }

//     string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
//     {

//         vector<int> par(s.size());
//         vector<int> rank(s.size());

//         for (int i = 0; i < s.size(); i++)
//         {
//             par[i] = i;
//             rank[i] = 0;
//         }

//         for (vector<int> &v : pairs)
//         {
//             int val1 = v[0];
//             int val2 = v[1];
//             int LeadVal1 = find(val1, par);
//             int LeadVal2 = find(val2, par);
//             if (LeadVal1 != LeadVal2)
//             {
//                 merge(LeadVal1, LeadVal2, par, rank);
//             }
//         }

//         vector<priority_queue<char, vector<char>, greater<char>>> pqs(s.size());
//         for (int i = 0; i < s.size(); i++)
//         {
//             int lofidx = find(i, par);
//             pqs[lofidx].push(s[i]);
//         }

//         for (int i = 0; i < s.size(); i++)
//         {
//             int lofidx = find(i, par);
//             char ch = pqs[lofidx].top();
//             pqs[lofidx].pop();
//             s[i] = ch;
//         }

//         return s;
//     }
// };