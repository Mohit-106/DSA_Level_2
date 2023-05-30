//Solution 1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;

        long long rmsbm = n & -static_cast<unsigned int>(n);
        rmsbm = ~rmsbm;

        n = rmsbm & n;

        if (n == 0) {
            return true;
        }
        return false;
    }
};

//Solution 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        int ans = n&(n-1);
        if(ans==0){
            return true;
        }
        return false;
    }
};

