// int countRev (string s)
// {
    
//     if(s.size()%2 == 1){
//         return -1;
//     }
//     //We are taking only even number 
//     stack<char>st;
//     st.push(s[0]);
//     for(int i=1; i<s.size(); i++){
//         if(s[i]=='{'){
//             st.push(s[i]);
//         }else{
//             if(st.size()==0){
//                 st.push(s[i]);
//             }else if(st.top()=='{'){
//                 st.pop();
//             }else{
//                 st.push(s[i]);
//             }
//         }
//     }
//     //All pairs settled till here
//     int closing = 0;
//     int opening = 0;
//     //Now we need to settle left even brackets
//     while(st.size()>0){
//         if(st.top() > '{'){
//             opening++;
//         }else{
//             closing++;
//         }
//         st.pop();
//     }
//     // we need ciel in case of odd  
//     return (opening+2-1)/2 + (closing+2-1)/2 ;
// }


/////////////IMP//////////////////
//Insight 
//Left bracket in stack is in nature
//    }}}{{{
    // {} all this type will be removes by above algorithm