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

TreeNode *rms(TreeNode *ln, TreeNode *cn)
{

    while (ln->right != NULL && ln->right != cn)
    {
        ln = ln->right;
    }

    return ln;
}

vector<int> morrisInTraversal(TreeNode *root)
{

    TreeNode *cn = root;
    vector<int> res;
    while (cn != NULL)
    {
        TreeNode *ln = cn->left;
        if (ln == NULL)   // it means that left child doen not exist
        {
            res.push_back(cn->val);
            cn = cn->right;
        }
        else
        {
            TreeNode *rightmostNode = rms(ln, cn);
            if (rightmostNode->right == NULL) // creating thread and move to left
            {
                res.push_back(cn->val);
                rightmostNode->right = cn;
                cn = cn->left;
            }
            else // already thread is created -> means we are at right most node and we can at this node
                 // only if we have traversed all the left sub tree and should move to right
            {
                rightmostNode->right = NULL;
                cn = cn->right;
            }
        }
    }

    return res;
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

    vector<int> ans = morrisInTraversal(root);

    for (int i : ans)
    {
        cout << i << " ";
    }
}

int main()
{
    solve();
    return 0;
}