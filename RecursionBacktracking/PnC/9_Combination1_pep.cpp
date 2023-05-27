//n boxes and r similar items
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v){

    for(int &val : v){
        cout<<val;
    }
    cout<<endl;
    
}

void combination(int n, int c,string ans, int box, int count){

    if(box > n){
        if(c==count){
            cout<<ans<<endl;
        }
        return;
    }
    combination(n,c,ans+"i",box+1,count+1);
    combination(n,c,ans+"-",box+1,count);

}

int main(){

    int n,c;
    cin>>n>>c;
    combination(n,c,"",1,0);

}