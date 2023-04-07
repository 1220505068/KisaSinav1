struct Node {
    int val;
    Node* left;
    Node* right;
};

Node* flatten(Node* root) {
    if (!root) {
        return nullptr;
    }
    Node* left = flatten(root->left);
    Node* right = flatten(root->right);
    root->left = nullptr;
    if (left) {
        root->right = left;
        while (left->right) {
            left = left->right;
        }
        left->right = right;
    } else {
        root->right = right;
    }
    return root;
}

