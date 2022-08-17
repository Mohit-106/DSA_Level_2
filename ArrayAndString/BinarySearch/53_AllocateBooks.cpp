//https://www.interviewbit.com/problems/allocate-books/

// int Solution::books(vector<int> &A, int B)
// {
//     if (B > A.size())
//     {
//         return -1;
//     }
//     int minPagesAllowed = INT_MIN;
//     int maxPagesAllowed = 0;
//     for (int &pages : A)
//     {
//         minPagesAllowed = max(minPagesAllowed, pages); // in case there are n students
//         maxPagesAllowed += pages;                      // in case there is only one student;
//     }

//     while (minPagesAllowed < maxPagesAllowed)
//     {   
//         //what if these are the max pages we can allot to one student 
//         int allot = (minPagesAllowed + maxPagesAllowed) / 2; // maximum number of book alloted
//         int std = 1;
//         int pages = 0;
//         for (int &val : A)
//         {
//             if (pages + val <= allot)
//             {
//                 pages += val;
//             }
//             else
//             {
//                 std++;
//                 pages = val;
//             }
//         }

//         if (std > B)
//         {
//             minPagesAllowed = allot + 1;
//         }
//         else
//         {
//             maxPagesAllowed = allot;
//         }
//     }

//     return maxPagesAllowed;
// }
