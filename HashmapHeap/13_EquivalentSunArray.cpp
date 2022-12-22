// class Solution
// {
// public:
//     int countDistinctSubarray(int arr[], int n)
//     {
        
//         unordered_map<int,int>mp;
//         set<int>s;
//         for(int i=0; i<n; i++){
//             s.insert(arr[i]);
//         }
//         int k = s.size();
        
//         int ans=0;
//         int i = -1;
//         int j = -1;
        
        
        
        // while(true){
        //     bool f1=false;
        //     bool f2=false;
        //     //acquire
        //     while(i<n-1){
        //         f1=true;
        //         i++;
        //         mp[arr[i]]++;
        //         if(mp.size()==k){
        //             ans+=n-i;
        //             break;
        //         }
                
        //     }
        //     //release char and check this cound be a answer or nor
        //     while(j < i){
        //         f2=true;
        //         j++;
        //         if(mp[arr[j]]==1){
        //             mp.erase(arr[j]);
        //         }else{
        //             mp[arr[j]]--;
        //         }
                
        //         if(mp.size()==k){
        //             ans+=n-i;
        //         }else{
        //              break;
        //         }
        //     }
            
        //     if(f1==false && f2==false){
        //         break;
        //     }
            
        // }
        // return ans;
//     }
// };