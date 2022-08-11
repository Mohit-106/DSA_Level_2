// class Solution
// {
// public:
//     long long minTime(int arr[], int n, int k)
//     {

//         // Firstly identify minimum time and maaximum time possible
//         int ltr = INT_MIN; // lowest time required-> when n painters are there
//         long long htr = 0; // Highest time required-> when only 1 painter is there
//         for (int i = 0; i < n; i++)
//         {
//             ltr = max(arr[i], ltr);
//             htr += arr[i];
//         }

//         while (ltr < htr)
//         {

//             int time = (ltr + htr) / 2;
//             int painters = 1;
//             int timetaken = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (timetaken + arr[i] <= time)
//                 {
//                     timetaken += arr[i];
//                 }
//                 else
//                 {
//                     painters++;
//                     timetaken = arr[i];
//                 }
//             }

//             if (painters > k)
//             {
//                 // more painter used so need to increse the time so that
//                 //  less painter can do more work
//                 ltr = time + 1;
//             }
//             else
//             {
//                 // here task done by painter
//                 // try more less time
//                 htr = time;
//             }
//         }

//         return htr;
//     }
// };
