   bool isHeap(Node* tree) {
        // code here
        if(tree==nullptr) return true;
        queue<Node*> q;
        Node *root = tree;
        q.push(root);
        bool nullflag = false;
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            if(node==nullptr) nullflag = true;
            else{
                if(nullflag==true) return false;
                if(node->left && node->left->data > node->data ||
                node->right && node->right->data > node->data) return false;
            
                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;
    }
/*In this approach we have to prove that
the root node is always greater than 
the left and the right node 

and along with it we have to say that
it should be complete

Now what it will do is if any time
wven one of the node is null than after
that all the nodes should be null 
according to rule and if it is not 
followed than return false 

we will use bfs here*/
