void mirror(Node* node) {
   

  //Recursive Code
    if(!node) return;
    swap(node->left, node->right);
    mirror(node->left);
    mirror(node->right);
  

  //Iterative Code
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        swap(curr->left, curr->right);
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);    
    }
    }
/* Recursive code will just to preorder
traversal and in which it will at every
iteration swap the data values in it */

/*Iterative code will use bfs and take
the node at every level and swap the 
values at each iteration*/
