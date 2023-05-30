class Solution
{
public:
    int minBitFlips(int start, int goal)
    {

        // Step 1 take xor of start and end
        // Now we have 1 where bits are not equal
        // Step 2 Count the bits using

        int txor = start ^ goal;
        int count = 0;
        while (txor != 0)
        {
            int rmsbm = txor & -txor;
            rmsbm = ~rmsbm;
            txor = txor & rmsbm;
            count++;
        }

        return count;
    }
};