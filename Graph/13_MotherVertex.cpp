// If i can reach mother vertex then i am also a mother vertex
// But if there is only one mother vertex it means that nobody can reach mother vertex
// so only mother vertex can make all vertex visited 

//Step 1 let 0 be the mother vertex then make is mother vertex and make call
// dfs call will stop only if we have processes the mother vertex





// gfg->Mothe Vertex
// class Solution
// {
//     public:
//     //Function to find a Mother Vertex in the Graph.
//     void dfs(vector<int>adj[], int src, vector<bool>&visited){
//         visited[src]=true;
//         for(int nbr : adj[src]){
//             if(visited[nbr]==false){
//                 dfs(adj,nbr,visited);
//             }
//         }

//     }

// 	int findMotherVertex(int V, vector<int>adj[])
// 	{

// 	    vector<bool>visited(V);
// 	    int pmv=0;
// 	    for(int i=0;i<V;i++){
// 	        if(!visited[i]){
// 	            dfs(adj,i,visited);
// 	            pmv=i;
// 	        }
// 	    }

// 	    vector<bool>visited2(V);
// 	    dfs(adj,pmv,visited2);
// 	    for(bool flag : visited2){
// 	        if(flag==false){
// 	            return -1;
// 	        }
// 	    }

// 	    return pmv;

// 	}

// };