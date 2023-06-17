

#include<bits/stdc++.h>
using namespace std;


int cnt = 0;

int find(int x, vector<int>&par){

    if(par[x]==x){
        return x;
    }
    par[x]=find(par[x],par);
    return par[x];


}

void merge(int x , int y, vector<int>&par, vector<int>&rank){

    if(rank[x]>rank[y]){
        par[y]=x;
    }else if(rank[y]>rank[x]){
        par[x]=y;
    }else{
        par[x]=y;
        rank[y]++;
    }

}

void checkIsland(int x , int y, int xx, int yy, vector<vector<int>>&grid, vector<int>&par, vector<int>&rank){
    if(xx<0 || yy<0 || xx>=grid.size() || yy>=grid[0].size() || grid[xx][yy]==0){
        return;
    }
    int xyCell = x * grid[0].size() + y;
    int xxyyCell = xx * grid[0].size() + yy; 

    int xyPar = find( xyCell ,par);
    int xxyyPar = find(xxyyCell ,par);

    if(xyPar != xxyyPar){
        cnt--;
        merge(xyPar,xxyyPar,par,rank);
    }
}


vector<int>numIslands2(int m,int n, vector<vector<int>>& pos){
    vector<vector<int>>grid(n,vector<int>(m));
    vector<int>res;
    vector<int>par(n*m);
    vector<int>rank(n*m);
    for(int i=0;i<m*n;i++){
        par[i]=i;
    }

    for(vector<int>& position : pos){
        int x = position[0];
        int y = position[1];
        grid[x][y]=1;
        cnt++;
        checkIsland(x,y,x+1,y,grid,par,rank);
        checkIsland(x,y,x-1,y,grid,par,rank);
        checkIsland(x,y,x,y+1,grid,par,rank);
        checkIsland(x,y,x,y-1,grid,par,rank);
        res.push_back(cnt);
    }

    return res;
}

int main(){

    int m,n,q;
    cin>>m>>n>>q;
    
    vector<vector<int>>pos(q,vector<int>(2));
    
    for(int i=0;i<q;i++){
        cin>>pos[i][0];
        cin>>pos[i][1];
    }
    vector<int>ans=numIslands2(m, n, pos);
    
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        if(i==ans.size()-1)
            cout<<ans[i];
        else
            cout<<ans[i]<<", ";
    }
    cout<<"]";

    
}
