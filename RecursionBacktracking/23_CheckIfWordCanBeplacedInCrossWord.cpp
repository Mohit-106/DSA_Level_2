// class Solution {
// public:


//     bool canPlaceHoriontallyLefttoRight(vector<vector<char>>& board, string &word, int i, int j){

//         if(j-1>=0 && board[i][j-1]!='#'){
//             return false;
//         }
//         if(j+word.size()<board[0].size() && board[i][j+word.size()]!='#'){
//             return false;
//         }

//         for(int jj=0; jj<word.size(); jj++){
//             if(j+jj==board[0].size()){
//                 return false;
//             }
//             if(board[i][j+jj]==' ' || word[jj]==board[i][j+jj]){
//                 continue;
//             }else{
//                 return false;
//             }
//         }

//         cout<<"h"<<endl;

//         return true;
//     }

//        bool canPlaceHoriontallyRighttoLeft(vector<vector<char>>& board, string &word, int i, int j){

//         if(j-1>=0 && board[i][j-1]!='#'){
//             return false;
//         }
//         if(j+word.size()<board[0].size() && board[i][j+word.size()]!='#'){
//             return false;
//         }

//         for(int jj=0; jj<word.size(); jj++){
            
//         }

//         cout<<"h"<<endl;

//         return true;
//     }

//       bool canPlaceVerticallyToptoBottom(vector<vector<char>>& board, string &word, int i, int j){

//         if(i-1>=0 && board[i-1][j]!='#'){
//             return false;
//         }

//         if(i+word.size()<board.size() && board[i+word.size()][j]!='#'){
//             return false;
//         }

//         for(int ii=0; ii<word.size(); ii++){
//             if(i+ii==board.size()){
//                 return false;
//             }
//             if(board[i+ii][j]==' ' || word[ii] == board[i+ii][j]){
//                 continue;
//             }else{
//                 return false;
//             }
//         }

//        cout<<"v"<<endl;
//         return true;

//     }


//       bool canPlaceVerticallyBottomtoTop(vector<vector<char>>& board, string &word, int i, int j){

//         if(i-1>=0 && board[i-1][j]!='#'){
//             return false;
//         }

//         if(i+word.size()<board.size() && board[i+word.size()][j]!='#'){
//             return false;
//         }

//         for(int ii=word.size()-1; ii>=0; ii++){
 
//         }

//        cout<<"v"<<endl;
//         return true;

//     }

    


//     bool placeWordInCrossword(vector<vector<char>>& board, string word) {

//         for(int i=0; i<board.size();i++){
//             for(int j=0; j<board[0].size(); j++){
//                if(board[i][j] == ' ' || board[i][j] == word[0]){

//                    if(canPlaceHoriontally(board,word,i,j)){
//                        return true;
//                    }
//                    if(canPlaceVertically(board,word,i,j)){
//                        return true;
//                    }

//                }
//             }
//         }
//         return false;

//     }
// };