// class Solution{
// 	public:
// 	int LongestBitonicSequence(vector<int>nums)
// 	{
// 	    int n = nums.size();
// 	    vector<int>inc(n);
// 	    vector<int>dec(n);
// 	    inc[0] = 1;
// 	    dec[n-1]=1;
// 	    for(int i=1; i<n; i++){
// 	        int maxlen = 0;
// 	        for(int j=i-1; j>=0; j--){
// 	            if(nums[i]>nums[j]){
// 	                maxlen = max(maxlen,inc[j]);
// 	            }
// 	        }
// 	        inc[i] = maxlen+1;  
// 	    }
// 	    for(int i=n-2; i>=0; i--){
// 	        int maxlen = 0;
// 	        for(int j=i+1; j<n; j++){
// 	            if(nums[i]>nums[j]){
// 	                maxlen = max(maxlen,dec[j]);
// 	            }
// 	        }
// 	        dec[i] = maxlen+1;
// 	    }
// 	    int ans=0;
// 	    for(int i=0; i<n; i++){
// 	        ans = max(ans,(inc[i]+dec[i]));
// 	    }
// 	    return ans-1;
// 	}
// };
