//GFG->> https://practice.geeksforgeeks.org/problems/alien-dictionary/1/

// class Solution{
//     public:
//     void dfs(vector<vector<int>>&graph,stack<int>&st,int src, vector<bool>&visited){
        
//         visited[src]=true;
//         for(int nbr : graph[src]){
//             if(visited[nbr]==false){
//                 dfs(graph,st,nbr,visited);
//             }
//         }
        
//         st.push(src);
        
//     }
//     string findOrder(string dict[], int N, int K) {
//         vector<vector<int>>graph(K,vector<int>());
//         //creating graph
//         for(int i=0;i<N-1;i++){
//             string s1 = dict[i];
//             string s2 = dict[i+1];
//             for(int j=0; j < min(s1.size(),s2.size()); j++){
//                 if(s1[j]!=s2[j]){
//                     graph[s1[j] - 'a'].push_back(s2[j]-'a');
//                     break;
//                 }
//             }
//         }
//         stack<int>st;
//         vector<bool>visited(graph.size());
//         for(int i=0;i<graph.size();i++){
            
//             if(visited[i]==false){
//                  dfs(graph,st,i,visited);
//             }
           
//         }
//         string ans;
//         //string s(1, x);
//         while(st.size()>0){
            
//             int top = st.top();
//             st.pop();
//             char ch = (char)(top + 'a');
//             string s1 (1,ch);
//             ans+=s1;
            
//         }
        
//         return ans;
        
        
        
//     }
// };