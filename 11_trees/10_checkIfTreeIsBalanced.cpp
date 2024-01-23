#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int getHeight(TreeNode* root) {
    if (root == nullptr) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int height = 0;

    while (!q.empty()) {
        int nodesAtCurrentLevel = q.size();

        while (nodesAtCurrentLevel > 0) {
            TreeNode* currentNode = q.front();
            q.pop();

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);

            nodesAtCurrentLevel--;
        }

        height++;
    }

    return height;
}

bool isBalanced(TreeNode* root) {
    if (root == nullptr) return true;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return (abs(leftHeight - rightHeight) <= 1) && isBalanced(root->left) && isBalanced(root->right);
}

int main() {
    // Create a sample tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->left->left = new TreeNode(7);
 root->left->left->left->left = new TreeNode(7);
  root->left->left->left->left->left = new TreeNode(7);
    if (isBalanced(root)) {
        cout << "The tree is balanced.\n";
    } else {
        cout << "The tree is not balanced.\n";
    }
    
    return 0;
}
