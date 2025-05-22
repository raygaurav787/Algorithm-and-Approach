// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
    stack<Node*> st;
    Node* curr=root;
    vector<int> result;
    while(curr!=NULL || !st.empty()){
    while(curr!=NULL){
    st.push(curr);
    curr=curr->left;
    }
    curr=st.top();
    st.pop();
    result.push_back(curr->data);
    curr=curr->right;
    }
    return result;
    }
};

/* So we will use stack to undergo and 
do recursion here we will first
push all the left childs to the stack 
and so we can than as we pull out each
of the element we will take it out and 
so then we will traverse the top 
element as well as the right child for 
it */
