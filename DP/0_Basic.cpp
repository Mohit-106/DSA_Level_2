#include <bits/stdc++.h>
using namespace std;

int VariableJump(vector<int> &v, int n, int i, vector<int> &dp)
{

    if (i == n)
    {
        return 1;
    }

    if (i > n)
    {
        return 0;
    }

    if (dp[i] != 0)
    {
        return dp[i];
    }

    int paths = 0;
    for (int j = 1; j <= v[i]; j++)
    {

        paths += VariableJump(v, n, i + j, dp);
    }

    return dp[i] = paths;
}

void printPaths(int n, string s)
{

    if (n == 0)
    {
        cout << s << endl;
        return;
    }

    if (n < 0)
    {
        return;
    }

    printPaths(n - 1, s + to_string(1));
    printPaths(n - 2, s + to_string(2));
    printPaths(n - 3, s + to_string(3));
}

int path(int n, vector<int> &dp)
{

    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    cout << n << endl;
    int p1 = path(n - 1, dp);
    int p2 = path(n - 2, dp);
    int p3 = path(n - 3, dp);

    return dp[n] = p1 + p2 + p3;
}

int minMoves(vector<int> &v, int n, int i, vector<int> &dp)
{

    if (i == n)
    {
        return 0;
    }

    int paths = INT_MAX;

    if (v[i] != 0)
    {

        for (int j = 1; j <= v[i] && i + j <= n; j++)
        {
            paths = min(minMoves(v, n, i + j, dp),paths);
        }
    }

    if(paths == INT_MAX){
        return paths;
    }else{
        return paths+1;
    }


}

int main()
{

    int n;
    cin >> n;
    vector<int> dp(n + 1);
    // int ans = path(n,dp);
    // cout<<ans<<endl;
    // printPaths(n,"");
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = minMoves(v, n, 0, dp);
    cout<<ans<<endl;
}