#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<string, vector<string>, greater<string>>pq; // print in laxical order
    pq.push("abc");
    pq.push("aac");
    pq.push("abb");
    pq.push("acc");
    while(pq.size()>0){
        string s = pq.top();
        pq.pop();
        cout<<s<<endl;
    }

}

// Time complexty O(nlogn)