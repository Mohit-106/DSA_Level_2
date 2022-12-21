// queue<int> modifyQueue(queue<int> q, int k) {
//     stack<int>st;
//     int i = 1;
//     int n = q.size()-k;
//     while(i<=k){
//         st.push(q.front());
//         q.pop();
//         i++;
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
//     while(n--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }