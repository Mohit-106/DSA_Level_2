// class Solution
// {
//     public:
//     //Function to swap odd and even bits.
//     unsigned int swapBits(unsigned int n)
//     {
//         int emask = 0xAAAAAAAA;
//         int omask = 0x55555555;  
//         //even preserve
//         int a = emask & n;       
//         //odd preserve;
//         int b = omask & n;
//         //even bit sifted to odd palce
//          a = a>>1;
//          //odd shifted to even places
//          b= b<<1;     
//          return a|b;
//     }
// };
