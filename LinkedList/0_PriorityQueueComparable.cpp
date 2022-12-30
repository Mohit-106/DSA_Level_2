#include <bits/stdc++.h>
using namespace std;
class Pair{
    public:
    int node;
    int next;
    Pair(int node , int next){
        this->node = node;
        this->next = node;
    }
};

class comp {
    public:
    bool operator()(Pair * p1, Pair * p2){
    if(p1->node != p2->node){
        return p1->node < p2->node;
    }
    return true;
    }
};


int main(){

    priority_queue<Pair*,vector<Pair*>,comp>pq;
    pq.push(new Pair(10,48));
    pq.push(new Pair(1,46));
    pq.push(new Pair(1,45));
    pq.push(new Pair(13,4));
    
    while(!pq.empty()){
        Pair * top = pq.top();
        cout<<top->node<<" "<<top->next<<endl;
        pq.pop();
    }

    return 0;
}