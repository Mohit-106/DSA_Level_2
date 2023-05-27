//n boxes and r distinct items



#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&v){
    
    for(int &val : v){
        cout<<val;
    }
    cout<<endl;
    
}

void permute(int n, int c,vector<int>&v,int x){
    
    
    if(x>c){
        
        print(v);
        return;
        
    }
    
    
    
    
    for(int i=0; i<n; i++){
        
        if(v[i]==0){
            v[i] = x;
            permute(n,c,v,x+1);
            v[i]=0;
        }
        
    }
    
}

int main(){
    int n,c;
    cin>>n>>c;
    vector<int>v(n);
    permute(n,c,v,1);
    return 0;
    
}