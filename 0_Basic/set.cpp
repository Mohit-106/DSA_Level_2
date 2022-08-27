#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> twoSum(vector<int>&nums , int target, int si){
  vector<vector<int>> ans;
  int i = si;
  int j = nums.size()-1;
  while(i<j){
    if(i!=si && nums[i]==nums[i-1]){
      i++;
      continue;
    }

    if(nums[i]+nums[j]==target){
      ans.push_back({nums[i],nums[j]});
      i++;
      j--;
    }else if(nums[i]+nums[j] > target){
      j--;
    }else{
      i++;
    }

  }
  return ans;


}


vector<vector<int>> ksumHelper(vector<int>&nums, int target, int k , int si){
    
  if(k==2){
    return twoSum(nums,target,si);
  }

  int val = nums[si];
  cout<<val<<endl;
  vector<vector<int>> res = ksumHelper(nums,target-val,k-1,si+1);
  vector<vector<int>>fres;
  for(auto & v : res){
     v.push_back(val);
     fres.push_back(v);
  }
  return fres;

}


vector<vector<int>> kSum(vector<int> &nums, int target, int k) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans = ksumHelper(nums,target,k,0);
    return ans;
}

int main(){
    int n, target, k;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
    }
    cin>>target>>k;
    
    vector<vector<int>> res=kSum(arr, target, k);
    vector<string> finalResult;
    
    for (vector<int> list : res) {
      sort(list.begin(), list.end());
      string ans = "";
      for (int val : list) {
        ans += to_string(val) + " ";
      }
      finalResult.push_back(ans);
    }
    sort(finalResult.begin(), finalResult.end());
    for (string str : finalResult) {
      cout<<str<<endl;
    }
  }