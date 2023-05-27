class Solution
{
public:
    int setBits(int n)
    {

        int count = 0;

        while (n != 0)
        {
            int rmsb = n & -n;
            // when we subtract rmsb mask to an number then it will make rmsb to zero
            n -= rmsb;
            count++;
        }

        return count;
    }
};