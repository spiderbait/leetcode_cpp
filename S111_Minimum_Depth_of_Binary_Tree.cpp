#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        return 0;
    }

    int postTraverse(TreeNode* root) {
        if (root->left != NULL) {
            return postTraverse(root->left) + 1;
        } else if (root->right != NULL) {
            return postTraverse(root->right) + 1;
        } else {
            return 1;
        }
    }
};

int main() {
    TreeNode *root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    Solution s;
    cout << s.postTraverse(root) << endl;
}