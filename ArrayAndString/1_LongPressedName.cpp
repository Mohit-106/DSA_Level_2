// here test cases to keep in mind 
// types.size() should be always > name.size() only then we can creat typed string
// while we are checking the condition name[i-1]==typed[j]-> make sure you are not at 0th idx
// if may possible i is completely traversed and j is left
// it may possible that j is processed and i left ->>ex name = acfvz tyoed=vacfvvv


// class Solution {
// public:
//     bool isLongPressedName(string name, string typed) {
//         if(name.size()>typed.size()){
//             return false;
//         }
//         int i=0,j=0;
//         while(i<name.size() && j<typed.size()){
//             if(name[i]==typed[j]){
//                 i++;
//                 j++;
//             }else if(i!=0 && name[i-1]==typed[j]){
//                 j++;
//             }else{
//                 return false;
//             }
//         }
        
//         while(j<typed.size()){
//             if(typed[j]!=name[name.size()-1]){
//                 return false;
//             }
//             j++;
//         }
        
//         if(i<name.size()){
//             return false;
//         }
        
//         return true;

//     }
// };


