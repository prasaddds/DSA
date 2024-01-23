#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;
    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool isChildSumProperty(Node *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return true;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *curr = q.front();
        q.pop();

        int childSum = 0;
        if (curr->left != NULL) {
            childSum += curr->left->data;
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            childSum += curr->right->data;
            q.push(curr->right);
        }

        if (curr->data != childSum && (curr->left != NULL || curr->right != NULL)) {
            return false;
        }
    }

    return true;
}

int main() {
    Node *root = new Node(20);
    Node *first = new Node(8);
    Node *second = new Node(12);
    Node *third = new Node(3);
    Node *fourth = new Node(9);
    root->left = first;
    root->right = second;
    root->right->left = third;
    root->right->right = fourth;

    if (isChildSumProperty(root)) {
        cout << "Yes....child sum property satisfied" << endl;
    } else {
        cout << "Not satisfying child sum property" << endl;
    }
    return 0;
}
