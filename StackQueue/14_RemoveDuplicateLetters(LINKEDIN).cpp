// class Solution
// {
// public:
//     string removeDuplicateLetters(string s)
//     {

//         vector<int> freq(26);
//         for (int i = 0; i < s.size(); i++)
//         {
//             freq[s[i] - 'a']++;
//         }

//         vector<int> alreadythereornot(26);

//         stack<char> st;

//         for (int i = 0; i < s.size(); i++)
//         {
//             char ch = s[i];

//             if (st.size() == 0)
//             {
//                 alreadythereornot[ch - 'a'] = 1;
//                 st.push(ch);
//                 freq[ch - 'a']--;
//             }
//             else
//             {

//                 if (alreadythereornot[ch - 'a'] == 0)
//                 {
//                     // ager main tujhse chhota hun and teri freq > 0 hai it means ki tu bad me bhi aayega to pop ho ja
//                     while (st.size() > 0 && ch < st.top() && freq[st.top() - 'a'] > 0)
//                     {
//                         alreadythereornot[st.top() - 'a'] = 0;
//                         st.pop();
//                     }
//                     st.push(ch);
//                     alreadythereornot[ch - 'a'] = 1;
//                 }

//                 freq[ch - 'a']--;
//             }
//         }

//         string res;

//         while (st.size() > 0)
//         {
//             res = st.top() + res;
//             st.pop();
//         }

//         return res;
//     }
// };