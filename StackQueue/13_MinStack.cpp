// Using Extra Space

// class MinStack
// {
// public:
//     stack<int> st;
//     stack<int> Min;
//     void push(int val)
//     {
//         st.push(val);
//         if (Min.size() == 0 || val <= Min.top())
//         {
//             Min.push(val);
//         }
//     }

//     void pop()
//     {

//         if (st.top() == Min.top())
//         {
//             st.pop();
//             Min.pop();
//         }
//         else
//         {
//             st.pop();
//         }
//     }

//     int top()
//     {

//         return st.top();
//     }

//     int getMin()
//     {
//         return Min.top();
//     }
// };


// Without using extra space O(1) space
// class MinStack
// {
// public:
//     stack<long long> st;
//     long long minVal = INT_MAX;
//     void push(int data)
//     {
//         long long val = data;
//         if (st.size() == 0)
//         {
//             st.push(val);
//             minVal = val;
//         }
//         else if (val >= minVal)
//         {
//             st.push(val);
//         }
//         else
//         {
//             st.push(val + val - minVal); // encrypted form of top
//                                          // it will help to regenerate mminVal on pop
//             minVal = val;
//         }
//     }

//     void pop()
//     {
//         if (st.top() >= minVal)
//         {
//             st.pop();
//         }
//         else if (st.top() < minVal)
//         {
//             minVal = 2 * minVal - st.top();
//             st.pop();
//         }
//     }

//     int top()
//     {

//         if (st.top() >= minVal)
//         {
//             return st.top();
//         }
//         return minVal;
//     }

//     int getMin()
//     {
//         return minVal;
//     }
// };
