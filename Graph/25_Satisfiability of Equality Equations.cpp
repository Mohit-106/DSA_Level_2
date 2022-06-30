// class Solution {
// public:

//     int find(int x, vector<int>&par){
//         if(x==par[x]){
//             return x;
//         }
//         par[x]=find(par[x],par);
//         return par[x];

//     }

//     void merge(int x, int y, vector<int>&par, vector<int>&rank){
//         if(rank[x]>rank[y]){
//             par[y]=x;
//         }else if(rank[y]>rank[x]){
//             par[x]=y;
//         }else{
//             par[x]=y;
//             rank[x]++;
//         }
//     }

//     bool equationsPossible(vector<string>& equations) {
//         vector<int>par(26);
//         vector<int>rank(26);
//         for(int i=0;i<par.size();i++){
//             par[i]=i;
//         }
//         for(int i=0;i<equations.size();i++){
//             string s = equations[i];
//             if(s[1] == '='){
//                 int lead1 = find(s[0]-'a',par);
//              int lead3=find(s[3]-'a',par);
//                 if(lead1!=lead3){
//                     merge(lead1,lead3,par,rank);
//                 }
//             }
//         }
//         for(int i=0;i<equations.size();i++){
//             string s = equations[i];
//             if(s[1]=='!'){
//                 int lead1 = find(s[0] -'a',par);
//                 int lead3=find(s[3] -'a',par);
//                 if(lead1==lead3){
//                     return false;
//                 }
//             }
//         }

//         return true;

//     }
// };