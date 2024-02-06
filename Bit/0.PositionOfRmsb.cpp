// class Solution
// {
//     public:
//     //Function to find position of first set bit in the given number.
//     unsigned int getFirstSetBit(int x)
//     {
        
//         if(x==0) return 0;
        
//         unsigned int y =  x&-x;
//         //cout<<y<<endl;
//         int count = 1;
//         int num = 1;
//         while(true){
//             if(num==y){
//                 return count;
//             }
//             num*=2;
//             count++;
//         }
        
//         return 0;
        
//     }
// };