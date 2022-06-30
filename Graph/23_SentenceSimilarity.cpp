#include <bits/stdc++.h>
using namespace std;

string find(string s, unordered_map<string, string> &parent)
{
    if (parent[s] == s)
    {
        return s;
    }
    parent[s] = find(parent[s], parent);
    return parent[s];
}

void merge(string s1, string s2, unordered_map<string, string> &parent, unordered_map<string, int> &rank)
{

    if (rank[s1] > rank[s2])
    {
        parent[s2] = s1;
    }
    else if (rank[s2] > rank[s1])
    {
        parent[s1] = s2;
    }
    else
    {
        parent[s1] = s2;
        rank[s2]++;
    }
}

bool areSentencesSimilarTwo(vector<string> &sentence1, vector<string> &sentence2, vector<vector<string>> &pairs)
{

    unordered_map<string, string> parent;
    unordered_map<string, int> rank;

    for (int i = 0; i < pairs.size(); i++)
    {
        parent[pairs[i][0]] = pairs[i][0];
        parent[pairs[i][1]] = pairs[i][1];
        rank[pairs[i][0]] = 0;
        rank[pairs[i][0]] = 0;
    }

    for (int i = 0; i < pairs.size(); i++)
    {
        string lead1 = find(pairs[i][0], parent);
        string lead2 = find(pairs[i][1], parent);
        if (lead1 != lead2)
        {
            merge(lead1, lead2, parent, rank);
        }
    }

    if (sentence1.size() != sentence2.size())
    {
        return false;
    }
    for (int i = 0; i < sentence1.size(); i++)
    {

        string s1 = sentence1[i];
        string s2 = sentence2[i];
        if (s1 == s2)
        {
            continue;
        }

        if (parent.find(s1) == parent.end() || parent.find(s2) == parent.end())
        {
            return false;
        }

        if (parent[s1] != parent[s2])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n;

    vector<string> sentence1;
    vector<string> sentence2;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        sentence1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        sentence2.push_back(x);
    }
    cin >> m;
    vector<vector<string>> pairs(m, vector<string>(2));

    for (int i = 0; i < m; i++)
    {
        cin >> pairs[i][0];
        cin >> pairs[i][1];
    }

    if (areSentencesSimilarTwo(sentence1, sentence2, pairs))
        cout << "true";
    else
        cout << "false";
}
