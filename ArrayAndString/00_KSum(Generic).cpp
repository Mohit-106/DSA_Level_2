
#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&nums, int i, int j, int &k){
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==k){
                return mid;
            }else if(nums[mid]>k){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return -1;
    }

    vector<vector<int>> twoSum(int idx, vector<int>& nums, int tar) {
        int n = nums.size();
        vector<vector<int>>res;
        if(n-idx  < 2) return res;
        for(int i=idx; i<n; i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            int k = tar-nums[i];
            int id = bs(nums,i+1,n-1,k);
            vector<int>ans;
            if(id!=-1){
                ans.push_back(nums[i]);
                ans.push_back(nums[id]);
                res.push_back(ans);
            }
        }
        return res;
    }

    vector<vector<int>> threeSum(int idx, vector<int>& nums, int tar) {
        int n = nums.size();
        vector<vector<int>>res;
        for(int i=idx; i<n; i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            int k = tar - nums[i];
            vector<vector<int>> ans = twoSum(i+1,nums,k);
            if(ans.size()>0){
                for(int j=0; j<ans.size(); j++){
                    ans[j].push_back(nums[i]);
                    res.push_back(ans[j]);
                }
            }
        }

        return  res;
    }

    vector<vector<int>> KSum(int idx, vector<int>&nums,int tar, int k){
        vector<vector<int>>tres;
        if(nums.size()-idx < k) return tres;
        if(k==2) return twoSum(idx,nums,tar);
        // if(k==3) return threeSum(idx,nums,tar);
        for(int i=idx; i<=nums.size()-k; i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            
            vector<vector<int>> res;
            res = KSum(i+1,nums,tar-nums[i],k-1);
            for(int j=0; j<res.size(); j++){
                res[j].push_back(nums[i]);
                tres.push_back(res[j]);
            }
        }
        return tres;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int tar, int k) {
        sort(nums.begin(),nums.end());
        return KSum(0,nums,tar,k);
    }

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int tar;
    cin>>tar;
    int k;
    cin>>k;

    vector<vector<int>>res = fourSum(nums,tar,k);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

