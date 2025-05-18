
int kthAncestor(Node *root, int k, int node) {
if (!root) return -1;

    queue<Node*> q;
    unordered_map<Node*, Node*> parent;  // Stores the parent of each node
    Node* targetNode = nullptr;

    q.push(root);
    parent[root] = NULL;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (current->data == node) {
            targetNode = current;
            break;
        }

        if (current->left) {
            q.push(current->left);
            parent[current->left] = current;
        }

        if (current->right) {
            q.push(current->right);
            parent[current->right] = current;
        }
    }

    // Move up the parent chain k times
    while (k > 0 && targetNode) {
        targetNode = parent[targetNode];
        k--;
    }

    return targetNode ? targetNode->data : -1;
}

