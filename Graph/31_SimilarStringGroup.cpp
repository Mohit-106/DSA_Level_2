//this code will node run for test case ["abc","abc"]


// class Solution {
// public:
//     string find(string s , unordered_map<string,string>&par){
//         if(s==par[s]){
//             return s;
//         }
//         par[s]=find(par[s],par);
//         return par[s];
//     }
    
//     void merge(string  x, string y, unordered_map<string,string>&par,unordered_map<string,int>&rank){
//         if(rank[x]>rank[y]){
//             par[y]=x;
//         }else if(rank[y]>rank[x]){
//             par[x]=y;
//         }else{
//             par[x]=y;
//             rank[y]++;
//         }
//     }
    
//     bool isSimilar(string s1 , string s2){
        
//         int count = 0;
//         for(int i=0;i<s1.size();i++){
//             if(s1[i]!=s2[i]){
//                 count++;
//             }
//         }
        
//         return count<=2;
//     }
    
//     int numSimilarGroups(vector<string>& strs) {
//         unordered_map<string,string>par;
//         unordered_map<string,int>rank;
//         for(string str : strs){
//             par[str]=str;
//             rank[str]=0;
//         }     
//         for(int i=0;i<strs.size()-1;i++){
//             for(int j=i+1;j<strs.size();j++){
//                 string str1 = strs[i];
//                 string str2 = strs[j];
//                 if(isSimilar(str1,str2)){
//                     string s1 = find(str1,par);
//                     string s2 = find(str2,par);
//                     if(s1!=s2){
//                         merge(s1,s2,par,rank);
//                     }
//                 }
//             }
//         }
//         int cnt = 0;
//         for(string &s : strs){
//             if(s==par[s]){
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// };