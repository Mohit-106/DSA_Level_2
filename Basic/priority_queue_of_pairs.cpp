




#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    int i;
    int j;
    int k;
    Pair(int i, int j, int k)
    {
        this->i = i;
        this->j = j;
        this->k = k;
    }
};

class comp{
    public:
    bool operator()(Pair * p1, Pair * p2){
        return p1->k > p2->k;
    }
};

bool compArray(int i, int j){

    return i>j;

}

int main()
{

    priority_queue<Pair*,vector<Pair*>,comp>pq;

    pq.push(new Pair(1,2,90));
    pq.push(new Pair(4,2,90));
    pq.push(new Pair(1,3,60));
    pq.push(new Pair(8,2,49));
    pq.push(new Pair(9,1,23));
    pq.push(new Pair(1,5,78));
    pq.push(new Pair(2,6,38));

    while(!pq.empty()){

        Pair * top = pq.top();
        pq.pop();
        cout<<top->i<<" "<<top->j<<" "<<top->k<<endl;

    }

    vector<int>v={2,4,6,3,1,7,8};
    sort(v.begin(),v.end(),compArray);

    for(int val : v){
        cout<<val<<endl;
    }


}