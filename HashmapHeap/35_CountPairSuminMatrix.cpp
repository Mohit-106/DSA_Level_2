// class Solution{
// public:	
// 	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int k)
// 	{
// 	    int count = 0;
// 	    unordered_map<int,int>mp;
// 	    for(int i=0; i<n; i++){
// 	        for(int j=0; j<n; j++){
// 	            mp[mat1[i][j]]++;
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        for(int j=0; j<n; j++){
// 	           int val = k-mat2[i][j];
// 	           if(mp.find(val)!=mp.end()){
// 	               count+=mp[val];
// 	           }
// 	           } 
// 	        }
// 	    return count;
// 	}
// };