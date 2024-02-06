class Solution
{
public:
    int setBits(int n)
    {

        int count = 0;

        while (n != 0)
        {
            int rmsb = n & -n;
            n -= rmsb;
            count++;
        }

        return count;
    }
};