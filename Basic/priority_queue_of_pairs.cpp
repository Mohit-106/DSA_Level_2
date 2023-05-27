#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(10, 20));
    pq.push(make_pair(202, 20));
    pq.push(make_pair(30, 20));
    pq.push(make_pair(400, 20));
    while (pq.size() > 0)
    {
        pair<int, int> top = pq.top();
        pq.pop();
        cout << top.first << " " << top.second << endl;
    }

    return 0;
}