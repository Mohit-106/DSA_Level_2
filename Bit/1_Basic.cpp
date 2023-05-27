//On off toggle and check

#include <bits/stdc++.h>
using namespace std;

void OOTC(int n, int i , int j, int k, int m){

    //On
    int onmask = (1<<i);
    //off
    int offmask = ~(1<<j);
    //Toggle
    int tmask = (1<<k);
    //Check
    int cmask = (1<<m);
    
    cout<< (n | onmask) <<endl;
    cout<< (n & offmask) <<endl;
    cout<< (n ^ tmask) <<endl;
    cout<< ((n&cmask) == 0 ? "off" : "on")<<endl;

}

int main(){
    int n,i,j,k,m;
    cin>>n>>i>>j>>k>>m;
    OOTC(n,i,j,k,m);
}

