// class Solution {
// public:
    
//     int helper(vector<string>&words, vector<int>&freq, vector<int>&score, int idx){

//         if(idx==words.size()){
//             return 0;
//         }
        
//         //Word not included
//         int notincluded = helper(words,freq,score,idx+1);

//         //Word included
//         //check if word included is valid or not
//         string word = words[idx];
//         bool flag = true;
//         int scr = 0;
//         for(int i= 0 ; i<word.size(); i++){
//             int  ch = word[i]-'a';
//             if(freq[ch]==0){
//                 flag = false;
//             }
//             scr+=score[ch];
//             freq[ch]--;
//         }

//         int included = 0;
//         if(flag){
//             included = scr + helper(words,freq,score,idx+1);
//         }

//         //Restore frequenct array while backtraking
//         for(int i= 0 ; i<word.size(); i++){
//             int  ch = word[i]-'a';
//             freq[ch]++;
//         }

//         return max(notincluded,included);
        

//     }

//     int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
//         vector<int>freq(26,0);
//         for(char ch : letters){
//             freq[ch-'a']++;
//         }

//         return helper(words,freq,score,0);

//     }
// };