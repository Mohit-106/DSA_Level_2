// import java.util.*;
// import java.io.*;

// public class Main {
//   public static void main(String[] args) throws NumberFormatException, IOException {
//     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//     String[] st = br.readLine().split(" ");
//     int m = Integer.parseInt(st[0]);
//     int n = Integer.parseInt(st[1]);
//     int q = Integer.parseInt(st[2]);

//     int[][] pos = new int[q][2];
//     for (int i = 0; i < q; i++) {
//       st = br.readLine().split(" ");
//       pos[i][0] = Integer.parseInt(st[0]);
//       pos[i][1] = Integer.parseInt(st[1]);
//     }

//     System.out.println(numIslands2(m, n, pos));
//   }


//   public static List<Integer> numIslands2(int m, int n, int[][] positions) {
//     int[][] grid = new int[m][n];
//     parent = new int[m * n];
//     rank = new int[m * n];
    
//     for(int i = 0; i < m * n; i++){
//         parent[i] = i;
//         rank[i] = 0;
//     }
    
//     ArrayList<Integer> res = new ArrayList<>();
//     count = 0;
    
//     for(int[] pos: positions){
//         int x = pos[0];
//         int y = pos[1];
//         grid[x][y] = 1;
        
//         count++;
        
//         handleNewCell(x, y, x - 1, y, m, n, grid);
//         handleNewCell(x, y, x + 1, y, m, n, grid);
//         handleNewCell(x, y, x, y - 1, m, n, grid);
//         handleNewCell(x, y, x, y + 1, m, n, grid);
        
//         res.add(count);
//     }
    
//     return res;
//   }
  
//   static void handleNewCell(int x, int y, int xx, int yy, int m, int n, int[][] grid){
//       if(xx < 0 || yy < 0 || xx >= m || yy >= m || grid[xx][yy] == 0){
//           return;
//       }
      
//       int xyCell = x * n + y;
//       int xxyyCell = xx * n + yy;
      
//       int xylead = find(xyCell);
//       int xxyylead = find(xxyyCell);
      
//       if(xylead != xxyylead){
//           count--;
//           union(xylead, xxyylead);
//       }
//   }
  
//   static int count;
//   static int[] parent;
//   static int[] rank;
  
  
//   static int find(int i){
//       if(parent[i] == i){
//           return i;
//       } else {
//           parent[i] = find(parent[i]);
//           return parent[i];
//       }
//   }
  
//   static void union(int i, int j){
//       if(rank[i] < rank[j]){
//           parent[i] = j;
//       } else if(rank[j] < rank[i]){
//           parent[j] = i;
//       } else {
//           parent[i] = j;
//           rank[j]++;
//       }
//   }
// }

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
