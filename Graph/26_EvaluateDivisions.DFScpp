// use map to create graph in case we are working with strings

// class Solution
// {
// public:
//     void dfs(unordered_map<string, vector<string>> &graph, unordered_map<string, double> &mul, double &val, bool &found, unordered_map<string, bool> &visited, string numerator, string denominator)
//     {

//         visited[numerator] = true;

//         for (auto &nbr : graph[numerator])
//         {
//             if (visited[nbr] == false)
//             {
//// calculate val
//                 val *= mul[numerator + "->" + nbr];
// check if desired fraction found or not
//                 if (denominator == nbr)
//                 {
//                     found = true;
//                     return;
//                 }
//// if not fond make call
//                 dfs(graph, mul, val, found, visited, nbr, denominator);

// //while returning make sure you are removing the effect you created so that more path can be explored
//                 if (found == true)
//                 {
//                     return;
//                 }
//                 val = val / mul[numerator + "->" + nbr];
//             }
//         }
//     }

//     vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
//     {

//         vector<double> ans;
//         unordered_map<string, vector<string>> graph;
//         unordered_map<string, double> mul;

//         // creating graph
//         for (int i = 0; i < equations.size(); i++)
//         {
//             string u = equations[i][0];
//             string v = equations[i][1];
//             graph[u].push_back(v);
//             graph[v].push_back(u);
//             mul[u + "->" + v] = values[i];
//             mul[v + "->" + u] = 1 / values[i];
//         }

//         // now we we get ans for each queries one by one
//         for (int i = 0; i < queries.size(); i++)
//         {
//             string numerator = queries[i][0];
//             string denominator = queries[i][1];

//             if (graph.find(numerator) == graph.end() || graph.find(denominator) == graph.end())
//             {
//                 ans.push_back(-1);
//                 continue;
//             }
//             else if (numerator == denominator)
//             {
//                 ans.push_back(1);
//                 continue;
//             }

//             double val = 1;
//             bool found = false;
//             unordered_map<string, bool> visited;
//             dfs(graph, mul, val, found, visited, numerator, denominator);
//             if (found)
//             {
//                 ans.push_back(val);
//             }
//             else
//             {
//                 ans.push_back(-1);
//             }
//         }
//         return ans;
//     }
// };