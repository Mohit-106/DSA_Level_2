//Must do Question

// class Solution {
// public:
//     int leastInterval(vector<char>& tasks, int n) {
//         unordered_map<char,int>mp;
//         for(int i=0; i<tasks.size();i++){
//             mp[tasks[i]]++;
//         }
//         //most frequent task will be executed first
//         priority_queue<int,vector<int>>pq;
//         for(auto val : mp){
//             pq.push(val.second);
//         }
//         int time = 1;
//         queue<pair<int,int>>q;
//         while(pq.size()>0 || q.size()>0){

//             if(q.size()>0){
//                 pair<int,int> front = q.front();
//                 if(front.second==time){
//                 q.pop();
//                 pq.push(front.first);
//                 }
//             }

//             if(pq.size()>0){
//             int top = pq.top();
//             pq.pop();
//             int push = top-1;
//             if(push>0){
//                q.push(make_pair(push,time+n+1));
//             }
//             }
//             time++;
//         }
//         return time-1;
//     }
// };