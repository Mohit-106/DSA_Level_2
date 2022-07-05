// class Solution 
// {
//     public:
//     //Function to find the maximum profit and the number of jobs done.
//     int find(vector<int>&par, int x){
//         if(x==par[x]){
//             return x;
//         }
        
//         int parent = find(par,par[x]);
//         return par[x]=parent;
        
//     }
//     vector<int> JobScheduling(Job arr[], int n) 
//     { 
//         vector<int>par(101);
//         sort(arr, arr+n, [](struct Job a, struct Job b){
//            return a.profit > b.profit; 
//         });
//         for(int i=0;i<par.size();i++){
//             par[i]=i;
//         }
        
//         int profit = 0;
//         int count = 0;
        
//         for(int i=0;i<n;i++){
//             Job cj = arr[i];
//             int parent = find(par,cj.dead);
//             if(parent!=0){
//                 par[parent]=parent-1;
//                 profit+=cj.profit;
//                 count++;
//             }
//         }
//         // cout<<count<<" "<<profit<<endl;
//         vector<int>ans;
//         ans.push_back(count);
//         ans.push_back(profit);
//         return ans;
        
//     } 
// };
