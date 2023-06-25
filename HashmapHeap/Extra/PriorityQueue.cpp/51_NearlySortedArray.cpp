// class Solution
// {
//     public:
//     //Function to return the sorted array.
//     vector <int> nearlySorted(int arr[], int n, int K){
//         priority_queue<int,vector<int>,greater<int>>pq;
        
//         for(int i=0; i<=K; i++){
//             pq.push(arr[i]);
//         }
//         int i=0;
//         while(i<n){
//             arr[i] = pq.top();
//             pq.pop();
//             int j = i+K+1;
//             if(j<n){
//             pq.push(arr[j]);
//             }
//             i++;
//         }
        
//         while(i<n){
//             arr[i] = pq.top();
//             pq.pop();
//         }
        
//         vector<int>res;
//         for(int i=0; i<n; i++){
//             res.push_back(arr[i]);
//         }
        
//         return res;
        
        
        
//     }
// };