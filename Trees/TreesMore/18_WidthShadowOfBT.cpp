#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val = 0;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;

    TreeNode(int val)
    {
        this->val = val;
    }
};
int minRange = INT_MAX;
int maxRange = INT_MIN;
void width(TreeNode *root, int hl)
{
    if (root)
    {
        minRange = min(minRange, hl);
        maxRange = max(maxRange, hl);
        width(root->left, hl - 1);
        width(root->right, hl + 1);
    }
}

// input_section=================================================

TreeNode *createTree(vector<int> &arr, vector<int> &IDX)
{

    if (IDX[0] > arr.size() || arr[IDX[0]] == -1)
    {
        IDX[0]++;
        return nullptr;
    }

    TreeNode *node = new TreeNode(arr[IDX[0]++]);
    node->left = createTree(arr, IDX);
    node->right = createTree(arr, IDX);

    return node;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> IDX(1, 0);
    TreeNode *root = createTree(arr, IDX);

    width(root, 0);
    cout << maxRange - minRange + 1 << endl;
}

int main()
{
    solve();
    return 0;
}