// class Solution {
//   public:
//     long long getSubstringWithEqual012(string str) {
//         unordered_map<string,int>mp;
//         mp["0#0"]++;
//         long long ans=0;
//         int z=0;
//         int o=0;
//         int t=0;
//         int count=0;
//         for(int i=0; i<str.size(); i++){
            
//             if(str[i]=='0'){
//                 z++;
//             }else if(str[i]=='1'){
//                 o++;
//             }else{
//                 t++;
//             }
//             int zo = z-o;
//             int ot = o-t;
//             string s = to_string(zo)+"#"+to_string(ot);
//             if(mp.find(s)!=mp.end()){
//                 count+=mp[s];
//             }
//             mp[s]++;
//         }
//         return count;
//     }
// };