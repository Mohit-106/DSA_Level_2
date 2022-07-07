// class Solution {
// public:
    
    
//     void dfs(unordered_map<string,priority_queue<string,vector<string>,greater<string>>>&adj,stack<string>&st,string src){
//         if(adj[src].size()==0){
//             st.push(src);
//             return;
//         }
        
//         while(adj[src].size()>0){
//             string nbr = adj[src].top();
//             adj[src].pop();
//             dfs(adj,st,nbr);
//         }
//         st.push(src);
        
//     }
    
    
    
    
//     vector<string> findItinerary(vector<vector<string>>& tickets) {
//          unordered_map<string,priority_queue<string,vector<string>,greater<string>>>adj;
//         //creating graph
//         for(vector<string> &ticket : tickets){
//             string src = ticket[0];
//             string dest = ticket[1];
//             adj[src].push(dest);
//         }
        
//         stack<string>st;
//         dfs(adj,st,"JFK");
//         vector<string>ans;
//         while(st.size()>0){
//             string top = st.top();
//             st.pop();
//             ans.push_back(top);
            
//         }
//         return ans;
        
        
//     }
// };