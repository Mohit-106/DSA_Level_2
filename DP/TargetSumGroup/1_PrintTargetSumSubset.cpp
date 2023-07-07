// class Solution{   
// public:

//    class Pair{
       
//        public:
//        int i;
//        int j;
//        string psf;
//        int ssf;
//        Pair(){
           
//        }
//        Pair(int i, int j, string psf, int ssf){
//            this->i = i;
//            this->j = j;
//            this->psf = psf;
//            this->ssf = ssf;
//        }
       
//    };


//     bool isSubsetSum(vector<int>arr, int sum){
//         // code here 
//         int n= arr.size();
//         vector<vector<int>>dp(n+1,vector<int>(sum+1));
        
//         for(int i=0; i<dp.size(); i++){
            
//             for(int j=0; j<dp[0].size(); j++){
                
//                 if(j==0){
//                     dp[i][j] = 1;
//                 }else if(i==0){
//                     dp[i][j] = 0;
//                 }else{
                    
//                     if(dp[i-1][j]==1){
//                         dp[i][j]=1;
//                     }else{
//                         int jump = arr[i-1];
//                         if(j-jump>=0 && dp[i-1][j-jump]==1){
//                             dp[i][j] = 1;
//                         }
//                     }
                    
//                 }
                
                
//             }
            
//         }
        
//         // print all paths
        
//         queue<Pair*>q;
//         q.push(new Pair(n,sum,"",0));
        
//         while(q.size()>0){
            
//             Pair * top = q.front();
//             q.pop();
//             if(top->ssf == sum){
//                 cout<<top->psf<<endl;
//                 continue;
//             }
//             int jump = arr[top->i-1];
//             if(top->j - jump >= 0 && dp[top->i-1][top->j - jump]==1){
//                 string path = to_string(jump);
//                 q.push(new Pair(top->i-1,top->j-jump,top->psf+" "+path,top->ssf+jump));
//             }
            
//             if(dp[top->i-1][top->j]==1){
//                 q.push(new Pair(top->i-1,top->j,top->psf,top->ssf));
//             }
            
            
//         }
//         return dp[n][sum];
        
        
//     }
// };