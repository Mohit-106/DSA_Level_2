// class Solution{
// public:
//     vector<int> findTwoElement(vector<int> arr, int n) {  
//         long long  txor = 0;
//         for(int i=0; i<=n; i++){
//             txor^=i;
//         }
//         for(int val : arr){
//             txor^=val;
//         }
//         long long rmsbm = txor & -txor;        
//         int x=0;
//         int y=0; 
//         for(int i=1; i<=n; i++){
//             if((i&rmsbm) == 0){
//                 x^=i;
//             }else{
//                 y^=i;
//             }
//         }  
//           for(int val :arr){
//             if((val&rmsbm) == 0){
//                 x^=val;
//             }else{
//                 y^=val;
//             }
//         }
//         for(int val : arr){
//             if(val == x){
//                 return {x,y};       
//             }else if(y==val){
//                 return {y,x};
//             }
//         }
//         return {x,y};
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         Solution ob;
//         auto ans = ob.findTwoElement(a, n);
//         cout << ans[0] << " " << ans[1] << "\n";
//     }
//     return 0;
// }