// vector<string> generate(int n)
// {
//     vector<string> ans;
//     queue<string> q;
//     q.push("1");
//     int i = 1;
//     while (i <= n)
//     {
//         string front = q.front();
//         q.pop();
//         ans.push_back(front);
//         q.push(front + "0");
//         q.push(front + "1");
//         i++;
//     }
//     return ans;
// }