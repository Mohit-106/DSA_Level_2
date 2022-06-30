#include <bits/stdc++.h>
using namespace std;
class Pair
{
public:
    int x, y;
    Pair(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int main()
{
    set<Pair *> s;
    s.insert(new Pair(80, 0));
    s.insert(new Pair(30, -1));
    s.insert(new Pair(60, -2));
    // s.insert(make_pair(20,0));
    // s.insert(make_pair(30,-1));
    // s.insert(make_pair(60,-2));
    for (auto &pr : s)
    {
        cout << pr->x << " " << pr->y << endl;
    }
    return 0;
}