// class Solution {
// public:
//     class Pair{
//         public:
//         string s;
//         int move;
//         Pair(string s, int move ){
//             this->s =s;
//             this->move = move;
//         }
//     };
//     vector<vector<int>>direction= {{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
//     string GridToString(vector<vector<int>>&board){
//         string s;
//         for(int i=0;i<board.size();i++){
//             for(int j=0;j<board[0].size();j++){
//                 s+=to_string(board[i][j]);
//             }
//         }
//         return s;
//     }
    
    
//     int slidingPuzzle(vector<vector<int>>& board) {
//         unordered_set<string>st;
//         string str = GridToString(board);
//         queue<Pair *>q;
//         q.push(new Pair(str,0));
//         while(q.size()>0){
//             //remove
//             Pair * front = q.front();
//             q.pop();
//             //mark 
//             if(st.find(front->s)!=st.end()){
//                 continue;
//             }
//             st.insert(front->s);
//             //check
//             if(front->s == "123450"){
//                 return front->move;
//             }
            
//             // add nbrs
//             int idx = front->s.find('0');
//             vector<int>dir = direction[idx];
//             for(int i=0;i<dir.size();i++){
//                 string nbr = front->s;
//                 char temp = nbr[dir[i]];
//                 nbr[dir[i]] = nbr[idx];
//                 nbr[idx]=temp;
//                 //check for nbrs
//                 if(st.find(nbr)==st.end()){
//                      q.push(new Pair(nbr,front->move+1));
//                 }
               
//             }
            
//         }
        
//         return -1;
        
        
//     }
// };