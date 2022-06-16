#include<bits/stdc++.h>
using namespace std;
string psf;
unordered_set <string> stringSet ;

void Travel(vector<vector<int>>&grid, int i , int j, string ans){

    if(i<0 || j<0 || i>=grid.size() || j >= grid[0].size()){
        return;
    }else if(grid[i][j]==0){
        return;
    }

    psf+=ans;
    grid[i][j]=0;
    Travel(grid,i+1,j,ans+"b");
    Travel(grid,i-1,j,ans+"t");
    Travel(grid,i,j+1,ans+"r");
    Travel(grid,i,j-1,ans+"l");
    
}

int numDistinctIslands(vector<vector<int>>& grid){
    
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==1){
              psf="";
              Travel(grid,i,j,"");
              stringSet.insert(psf);
            }
            
        }
    }
    return stringSet.size();
    
}

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>arr(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            
            arr[i][j]=x;
        }
    }
    cout<<numDistinctIslands(arr);
}