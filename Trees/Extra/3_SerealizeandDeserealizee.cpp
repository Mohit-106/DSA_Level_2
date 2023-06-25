// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Codec
// {
// public:
//     void serializeHelper(TreeNode *root, string &encode)
//     {

//         if (root == NULL)
//         {
//             encode.push_back('n');
//             encode.push_back(',');
//             return;
//         }

//         encode += to_string(root->val) + ",";

//         serializeHelper(root->left, encode);
//         serializeHelper(root->right, encode);
//     }

//     // Encodes a tree to a single string.
//     string serialize(TreeNode *root)
//     {
//         string encode = "";
//         serializeHelper(root, encode);
//         return encode;
//     }

//     // Decodes your encoded data to tree.
//     vector<string> convertTovector(string &str)
//     {
//         vector<string> elements;
//         stringstream ss(str);
//         string item;

//         while (getline(ss, item, ','))
//         {
//             elements.push_back(item);
//         }
//         return elements;
//     }

//     int idx = 0;

//     TreeNode *deserializeHelper(vector<string> &str)
//     {

//         if (idx == str.size() || str[idx] == "n")
//         {
//             idx++;
//             return NULL;
//         }

//         TreeNode *node = new TreeNode(stoi(str[idx]));
//         idx++;
//         node->left = deserializeHelper(str);
//         node->right = deserializeHelper(str);
//         return node;
//     }
//     TreeNode *deserialize(string data)
//     {
//         vector<string> tree = convertTovector(data);
//         return deserializeHelper(tree);
//     }
// };

// // Your Codec object will be instantiated and called as such:
// // Codec ser, deser;
// // TreeNode* ans = deser.deserialize(ser.serialize(root));