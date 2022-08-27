//Learn comparable and implementation of heap

// class Solution {
// public:
//    class comp{
//     public:
//         bool operator()(string a, string b){
//             string p = a + b;
//             string q = b + a;
//             if(p < q)
//                 return true;
//             return false;
//         }
//    };
//     string largestNumber(vector<int>& nums) {
//         priority_queue<string,vector<string>,comp>pq;
//         for(int val : nums){
//             pq.push(to_string(val));
//         }
//         string ans;
//         while(pq.size()>0){
//             ans+=pq.top();
//             pq.pop();
//         }
//         if(ans[0]=='0'){
//             return "0";
//         }
//         return ans;     
//     }
// };