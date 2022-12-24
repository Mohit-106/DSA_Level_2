// class Solution{
// public:	
// 	int longSubarrWthSumDivByK(int arr[], int n, int k)
// 	{
// 	    unordered_map<int,int>mp;
// 	    int len=0;
// 	    int psum=0;
// 	    mp[0]=-1;
// 	    for(int i=0; i<n; i++){
// 	        psum+=arr[i];
// 	        int rem = psum%k;
// 	        if(rem<0){
// 	            rem+=k;
// 	        }
	        
// 	        if(mp.find(rem)!=mp.end()){
// 	            len=max(len,i-mp[rem]);
// 	        }else{
// 	            mp[rem]=i;
// 	        }
// 	    }
// 	    return len;
	   
// 	}
// };