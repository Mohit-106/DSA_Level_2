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


TreeNode * rightmostnode(TreeNode * node, TreeNode * curr){

	while(node->right != NULL && node->right != curr){
		node = node->right;
	}
	return node;
}



vector<int> morrisInTraversal(TreeNode *root)
{

	vector<int>ans;
	TreeNode * curr = root;

	while(curr!=NULL){

		TreeNode * left = curr->left;
		if(left==NULL){
			ans.push_back(curr->val);
			curr=curr->right;
		}else{
			TreeNode *  rmn= rightmostnode(left,curr);
			if(rmn->right==curr){
				rmn->right = NULL;
				ans.push_back(curr->val);
				curr = curr->right;
			}else{
				rmn->right = curr;
				curr = curr->left;
			}
			
		}

	}

	return ans;

   
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