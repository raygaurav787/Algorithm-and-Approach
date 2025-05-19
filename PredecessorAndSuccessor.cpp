/* Predecessor will always and always be 
smaller than the root so we can say
that we want the largest element which
is smaller than the key 

so if root is smaller than key then we wil
move right and store it as 
possible answer to get larger element otherwise 
we will move left and so */

/*Successor will always be larger than 
the key so we have to find the smallest 
element greater than the key and so 
when larger than key element the it 
is an potential answer and so we will 
store it and mive left to find a smaller
element for it if smaller then move 
right*/

class Solution {
  public:

/* 
    
    Node* inorder_predecessor(Node* root,Node* &pre
    ,int key){
    Node* ans=NULL;
    while(root){
    if(root->data<key){
    ans=root;
    root=root->right;
    }
    else root=root->left;
    }
    return ans;
    }
    
    Node* inorder_successor(Node* root,Node* &suc,
    int key){
    Node* ans=NULL;
    while(root){
    if(root->data>key){
    ans=root;
    root=root->left;
    }
    else root=root->right;
    }
    return ans;
    }
    
    
    vector<Node*> findPreSuc(Node* root, int key) {
    Node* pre=NULL;
    Node* suc=NULL;
    pre=inorder_predecessor(root,pre,key);
    suc=inorder_successor(root,suc,key);
    return {pre,suc};
    }

};
