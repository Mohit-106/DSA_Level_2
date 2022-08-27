//LIS in n^2
// class Solution
// {
// public:
//     int maxEnvelopes(vector<vector<int>> &envelopes)
//     {
//         int ans = 0;
//         sort(envelopes.begin(), envelopes.end());
//         vector<int> LIS(envelopes.size());
//         LIS[0] = 1;
//         for (int i = 1; i < envelopes.size(); i++)
//         {
//             int val = 0;
//             for (int j = 0; j < i; j++)
//             {
//                 if (envelopes[j][1] < envelopes[i][1] && envelopes[j][0] < envelopes[i][0])
//                 {
//                     val = max(val, LIS[j]);
//                 }
//             }
//             LIS[i] = val + 1;
//         }
//         for (int val : LIS)
//         {
//             cout << val << endl;
//             ans = max(ans, val);
//         }
//         return ans;
//     }
// };


//LIS in nlog(n)


// class Solution {
// public:
//    void bs(vector<int>&tails, int lo, int hi, int tar){
        
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(tails[mid] > tar){
//                 hi = mid-1;
//             }else if(tails[mid]<tar){
//                 lo = mid+1;
//             }else{
//                 return;
//             }
//         }
//         //upper bound
//         tails[lo] = tar;
        
//     }
    
//    static bool cmp(const vector<int>& v1, const vector<int>& v2)
//    {
//     if(v1[0] != v2[0]){
//        return v1[0] < v2[0];
//     }else{
//         return v1[1] > v2[1];
//     }
   
//    }
//     int maxEnvelopes(vector<vector<int>>& envelopes) {
//         sort(envelopes.begin(),envelopes.end(),cmp);
//         for(auto val : envelopes){
//             cout<<val[0]<<" "<<val[1]<<endl;
//         }
        
//         vector<int>tail(envelopes.size());
//         tail[0]=envelopes[0][1];
//         int len = 1;
//         for(int i = 1; i < envelopes.size(); i++){
//             if(envelopes[i][1] > tail[len-1]){
//                 tail[len] = envelopes[i][1];
//                 len++;
//             }else{
//                 bs(tail,0,len-1,envelopes[i][1]);
//             }
//         }
//        return len;
//     }
    
// };