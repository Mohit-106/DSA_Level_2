// class Solution{
//     public:
//     int setSetBit(int x, int y, int l, int r){
        
//         //Steps 
//         //1. Make all bits in the range 1
//         //2. Then take and with y to make a mask with range bit same as y
//         //3. Now take or of mask and x and get the ans;
        
//         long long mask = (1LL<<(r-l+1));
//         mask--;
//         mask=(mask<<(l-1));
//         mask = ( mask & y);
//         return (mask|x);
        
        
//     }
// };