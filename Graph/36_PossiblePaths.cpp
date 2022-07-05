//Possible Paths
// class Solution {
// public:
// 	int isPossible(vector<vector<int>>paths){
// 	    int count = 0;
// 	    for(int i=0;i<paths.size();i++){
// 	        int size=0;
// 	        for(int j=0;j<paths.size();j++){         
// 	            if(i!=j && paths[i][j]==1){
// 	                size++;
// 	            }           
// 	        }
// 	        if(size%2==0){
// 	            count ++;
// 	        }
// 	    }
// 	    if(count == paths.size()){
// 	        return 1;
// 	    }else{
// 	        return 0;
// 	    } 
// 	}
// };