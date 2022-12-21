// class Solution{
//     public:
//     int findSubString(string str)
//     {
//         //collect all the unique characters of given string
//         set<char>s;
//         for(char ch : str){
//             s.insert(ch);
//         }
//         int ans = str.size();
//         int i = 0;
//         int j = 0;
//         unordered_map<char,int>mp;
//         while(true){
//             bool f1=false;
//             bool f2 = false;
//             //aquire
//             while(i<str.size() && mp.size()<s.size()){
//                 mp[str[i]]++;
//                 i++;
//                 f1=true;
//             }
            
//             //collect ans and release
//             while(j<i && mp.size()==s.size()){
//                 ans = min(ans,i-j);
//                 //release
//                 if(mp[str[j]]==1){
//                     mp.erase(str[j]);
//                 }else{
//                     mp[str[j]]--;
//                 }
//                 j++;
//                 f2=true;
                
//             }
            
//             if(f1==false && f2==false){
//                 break;
//             }
           
//         }
//         return ans;
//     }
// };