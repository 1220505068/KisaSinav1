struct Node {
    int val;
    Node* left;
    Node* right;
};

int sum(Node* root) {
    if (!root) {
        return 0;
    }
    int left_sum = sum(root->left);
    int right_sum = sum(root->right);
    int total_sum = root->val + left_sum + right_sum;
    if (total_sum == 2 * root->val) {
        return total_sum;
    } else {
        std::cout << "Error: The sum of child nodes is not equal to the value of the root node." << std::endl;
        return -1;
    }
}

