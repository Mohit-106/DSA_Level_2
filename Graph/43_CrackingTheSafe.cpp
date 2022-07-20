// class Solution {
// public:

//     bool dfs(string &s, unordered_set<string>&visited, int limit, int n , int k ){
//         if(visited.size()==limit){
//             return true;
//         }
//         //here we need to manage for string of size 1 case
//         if(s.size()==1){
//           string lnm1 = s;
//         }
//         string lnm1 = s.substr(s.size()-n+1);
//         for(int i=0;i<=k-1;i++){
//             string newpass = lnm1 + to_string(i);
//             if(visited.find(newpass)==visited.end()){
//                 visited.insert(newpass);
//                 s=s+to_string(i);
//                 cout<<s<<endl;
//                 bool check = dfs(s,visited,limit,n,k);
//                 if(check){
//                     return true;
//                 }

//                 visited.erase(newpass);
//                 s.erase(s.size()-1,1);
//             }
//         }

//         return false;

//     }

//     string crackSafe(int n, int k) {
//         string s;
//         for(int i=0;i<n;i++){
//             s+='0';
//         }
//         unordered_set<string>visited;
//         visited.insert(s);
//         int limit = pow(k,n);
//         dfs(s,visited,limit,n,k);
//         return s;

//     }
// };