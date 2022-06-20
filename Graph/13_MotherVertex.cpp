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