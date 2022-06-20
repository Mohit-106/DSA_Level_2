#include<bits/stdc++.h>
using namespace std;

vector<int>range(vector<vector<int>>&queries,int n, int q){

    vector<int>helper(n+1);
    for(int i=0;i<q;i++){
        int sidx = queries[i][0];
        int endingidx = queries[i][1];
        int inc = queries[i][2];
        helper[sidx]+=inc;
        helper[endingidx+1]-=inc;
    }
    vector<int>psum(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=helper[i];
        psum[i]=sum;
    }

    return psum;

}

int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>queries(q,vector<int>(3));
    for(int i=0;i<queries.size();i++){
        for(int j=0;j<queries[0].size(); j++){
            cin>>queries[i][j];
        }
    }

    vector<int>ans = range(queries,n,q);
    for(int &val : ans){
        cout<<val<<" ";
    }

}