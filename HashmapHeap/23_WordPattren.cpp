// class Solution {
// public:
//     bool wordPattern(string p, string s) {
//         vector<string>vs;
//         int i=0;
//         string str="";
//         while(i<s.size()){
//             if(s[i]==' '){
//                 vs.push_back(str);
//                 str="";
//             }else{
//                 str+=s[i];
//             }
//             i++;
//         }
//         vs.push_back(str);
//         if(vs.size()!=p.size()) return false;
//         unordered_map<char,string>mp;
//         unordered_map<string,char>mp2;

//         for(int i=0; i<p.size(); i++){
//             if(mp.find(p[i])==mp.end() && mp2.find(vs[i])==mp2.end()){
//                 mp[p[i]]=vs[i];
//                 mp2[vs[i]]=p[i];
//             }else{
//                 if(mp2[vs[i]]!=p[i] && mp[p[i]]!=vs[i]){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };