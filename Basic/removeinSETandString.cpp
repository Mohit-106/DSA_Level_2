#include<bits/stdc++.h>
using namespace std;
int main(){

    // string str = "absc";
    // str.erase(str.size()-1,1);
    // cout<<str<<endl;
    unordered_set<string>st;
    st.insert("abc");
    st.insert("bcd");
    st.erase("abc");
    for(auto str : st){
        cout<<str<<endl;
    }


    return 0;
}