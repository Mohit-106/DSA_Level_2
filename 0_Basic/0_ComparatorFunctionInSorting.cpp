#include <bits/stdc++.h>
using namespace std;

// bool comparable(vector<pair<int,int>>&v,int i, int j){
//   if(v[i].first > v[j].first){
//     return true;
//   }else if(v[i].first==v[j].first && v[i].second < v[j].second){
//     return true;
//   }else{
//     return false;
//   }

// }

bool cmp(pair<int,int>&a , pair<int,int>&b){
  //if we want to swap return false else return true
  if(a.first != b.first){
    if(a.first > b.first) return true; 
    return false;
  }else{
    if(a.second < b.second) return false;
    return true;
  }
}

//Short method
bool cmp2(pair<int,int>&a , pair<int,int>&b){
  //if we want to swap return false else return true
  if(a.first != b.first){
    // if true not swap if false then swap
    return a.first < b.first;
  }
  return a.second > b.second;
}

// For vectors of integers
bool cmp3(int a , int b){
  // if false then swap, if true then not swap
  return a>b;

}



int main(){
    
    vector<pair<int,int>>v;
    v = {{5,2},{3,3},{2,2},{2,3},{6,5},{9,5}};
    // for(int i=0;i<=v.size()-2;i++){
    //    for(int j=0;j<=v.size()-2-i;j++){
    //      if(comparable(v,j,j+1)){
    //         swap(v[j],v[j+1]);
    //      }
    //    }
    // }
    sort(v.begin(),v.end(), cmp2);

    for(int i = 0; i < v.size(); i++){
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }



    return 0;
}