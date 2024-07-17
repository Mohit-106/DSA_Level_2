// class Solution {
// public:
//     vector<int> divisibilityArray(string word, int m) {
//         long long psum = 0;
//         int n = word.size();
//         long long mul = m*1ll;
//         vector<int>res(n);
//         for(int i=0; i<n; i++){
//             psum = psum*10 + word[i]-'0';
//             if(psum%m==0) res[i]=1;
//             //cout<<psum<<" "<<val<<endl
//             psum%=m;
//         }
//         return res;
        
//     }
// };