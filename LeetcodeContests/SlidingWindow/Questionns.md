>> Very Importatnt questions to learn how to optamize a solution

# 2970. Count the Number of Incremovable Subarrays I ans II


class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>v(n,0);
        v[n-1]=1;
        for(int i=n-2; i>=0; i--){
            if(v[i+1]==1 && nums[i]<nums[i+1]){
                v[i]=1;
            }
        }

        for(int &val : v){
            cout<<val<<endl;
        }


        
        int ans=0;
        int idx = 0;

        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]){
                idx = i;
            }else{
                break;
            }
        }


        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                bool flag = true;
                // for(int k=0; k<=i-2; k++){
                //     if(nums[k]>=nums[k+1]){
                //         flag = false;
                //     }
                // }
                // This if statement is the optimization of the above loop
                if(i!=0 && idx<i-1){
                    flag = false;
                }

                // for(int k=j+1; k<n-1; k++){
                //     if(nums[k]>=nums[k+1]){
                //         flag = false;
                //     }
                // }

                // This if statement is the optamization 
                if(j<n-1 && v[j+1]!=1){
                    flag = false;
                }

                if(flag){
                    if(i>0 && j<n-1){
                        if(nums[i-1]<nums[j+1]){
                            ans++;
                        }
                    }else{
                        ans++;
                    }
                }

            }
        }
        return ans;
        
    }
};