//gfg->https://practice.geeksforgeeks.org/problems/topological-sort/1#



//topological sort

// class Solution
// {
// 	public:
// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    vector<int>topo(V);
// 	    vector<int>indegree(V);
// 	    for(int i=0;i<V;i++){
// 	        for(int nbr : adj[i]){
// 	            indegree[nbr]++;
// 	        }
// 	    }
// 	    queue<int>q;
// 	    for(int i = 0; i<V ;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
// 	    int idx =0;
// 	    while(q.size()>0){
// 	        int front = q.front();
// 	        q.pop();
// 	        topo[idx]=front;
// 	        idx++;
	        
// 	        for(int nbr : adj[front]){
// 	            indegree[nbr]--;
// 	            if(indegree[nbr]==0){
// 	                q.push(nbr);
// 	            }
	            
// 	        }
	        
// 	    }
// 	    return topo;
// 	}
// };