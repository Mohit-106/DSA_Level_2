#include<bits/stdc++.h>
using namespace std;



int cnt=0;
void printpairings(int i, int n,vector<int>&taken,string psf){

    if(i>n){
        cnt++;
        cout<<cnt<<"."<<psf<<endl;
        return;
    }

    if(taken[i]==1){
        printpairings(i+1,n,taken,psf);
    }else{
        taken[i]=1;
        //single
        printpairings(i+1,n,taken,psf+"("+to_string(i)+") ");
        //pairing with all other friends
        for(int j = i+1; j<=n; j++){
            if(taken[j]==0){

            taken[j]=1;
            printpairings(i+1,n,taken,psf+"("+to_string(i)+","+to_string(j)+") ");
            taken[j]=0;

            }
        }

        taken[i]=0;
       
    }

}


int main(){
    int n;
    cin>>n;
    vector<int>taken(n+1);
    printpairings(1,n,taken,"");
    return 0;
}