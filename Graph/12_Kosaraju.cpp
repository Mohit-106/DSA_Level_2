//gfg->Strongly Connected Components (Kosaraju's Algo)


// class Solution
// {
// 	public:
// 	//Function to find number of strongly connected components in the graph.
// 	void dfs(int V, vector<int> adj[], stack<int>&st, vector<bool>&visited,int src){
	    
// 	    visited[src]=true;
// 	    for(int nbr : adj[src]){
// 	        if(visited[nbr]==false){
	            
// 	            dfs(V,adj,st,visited,nbr);
	            
// 	        }
// 	    }
// 	    st.push(src);
	    
// 	}
	
// 	void dfs2(int V, vector<vector<int>>&adj,vector<bool>&visited,int src ){
	    
// 	    visited[src]=true;
// 	    for(int nbr : adj[src]){
// 	        if(visited[nbr]==false){
	            
// 	            dfs2(V,adj,visited,nbr);
	            
// 	        }
// 	    }
	    
	    
// 	}
	
	
//     int kosaraju(int V, vector<int> adj[])
//     {
//         vector<bool>visited(V);
//         stack<int>st;
//         for(int i=0;i<V;i++){
//             if(visited[i]==false){
//                 dfs(V,adj,st,visited,i);
//             }
//         }
//         //transpose
//         vector<vector<int>>tpose(V,vector<int>());
//         for(int i=0; i<V ;i++){
//             for(int val : adj[i] ){
//                 tpose[val].push_back(i);
//             }
//         }
//         vector<bool>visited2(V);
//         int count=0;
//         while(st.size()>0){
//             int top = st.top();
//             st.pop();
//             if(visited2[top]==false){
//                 dfs2(V, tpose,visited2,top);
//                 count++;
//             }
//         }
//         return count;
//     }
// };