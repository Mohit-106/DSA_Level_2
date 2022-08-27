// class NumArray
// {
// public:
//     class Fanwick
//     {
//     public:
//         vector<int> Fan;
//         Fanwick(vector<int> &nums)
//         {
//             // to create initial storage
//             // Constructor
//             Fan = vector<int>(nums.size() + 1);
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 int pos = i + 1;
//                 int val = nums[i];
//                 this->update(pos, val);
//             }
//         }
//         Fanwick()
//         {
//         }
//         int rms(int x)
//         {
//             return x & -x;
//         }
//         int sum(int pos)
//         {
//             int res = 0;
//             while (pos > 0)
//             {
//                 res += Fan[pos];
//                 // this will take us to parent node
//                 pos = pos - rms(pos);
//             }
//             return res;
//         }
//         void update(int pos, int delta)
//         {
//             // we will add delta change on fanwick array
//             while (pos < Fan.size())
//             {
//                 Fan[pos] += delta;
//                 pos = pos + rms(pos);
//             }
//         }
//     };
//     Fanwick *f1 = new Fanwick();
//     vector<int> oarr; // this is to calculate delta in update function
//     NumArray(vector<int> &nums)
//     {
//         f1 = new Fanwick(nums);
//         oarr = nums;
//     }

//     void update(int index, int val)
//     {
//         int delta = val - oarr[index];
//         int pos = index + 1;
//         f1->update(pos, delta);
//         oarr[index] = val;
//     }

//     int sumRange(int left, int right)
//     {
//         // In fanwick tree array we are storing index 5 at pos 6 so we need
//         //  to convert index to pos
//         int lpos = left + 1;
//         int rpos = right + 1;
//         // here we need some before left not till left
//         //(11-14) = (1-14)-(1-10)
//         int sumBeforeLeft = f1->sum(lpos - 1);
//         int sumtillRight = f1->sum(rpos);
//         return sumtillRight - sumBeforeLeft;
//     }
// };
