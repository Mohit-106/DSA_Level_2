//https://leetcode.com/problems/course-schedule-ii/

// class Solution
// {
// public:
//     vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
//     {
//         vector<int> ans(numCourses);
//         if (numCourses == 1)
//         {
//             return ans;
//         }
//         vector<vector<int>> graph(numCourses);
//         for (vector<int> v : prerequisites)
//         {
//             int src = v[1];
//             int nbr = v[0];
//             graph[src].push_back(nbr);
//         }
//         vector<int> indegree(numCourses);
//         for (int i = 0; i < numCourses; i++)
//         {
//             for (int nbr : graph[i])
//             {
//                 indegree[nbr]++;
//             }
//         }

//         queue<int> q;
//         for (int i = 0; i < numCourses; i++)
//         {
//             if (indegree[i] == 0)
//             {
//                 q.push(i);
//             }
//         }

//         int idx = 0;
//         while (!q.empty())
//         {
//             int front = q.front();
//             q.pop();
//             ans[idx] = front;
//             idx++;
//             for (int nbr : graph[front])
//             {
//                 indegree[nbr]--;
//                 if (indegree[nbr] == 0)
//                 {
//                     q.push(nbr);
//                 }
//             }
//         }
//         if (idx < numCourses)
//         {
//             vector<int> temp;
//             return temp;
//         }
//         return ans;
//     }
// };