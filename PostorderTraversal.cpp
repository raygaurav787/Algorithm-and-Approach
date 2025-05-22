public:
    vector<int> postOrder(Node* node) {
    vector<int> ans;
    stack<Node*> s1,s2;
    s1.push(node);
    while(!s1.empty()){
    Node* curr=s1.top();
    s1.pop();
    s2.push(curr);
    if(curr->left){
    s1.push(curr->left);
    }
    if(curr->right){
    s1.push(curr->right);
    }
    }
    while(!s2.empty()){
    ans.push_back(s2.top()->data);
    s2.pop();
    }
    return ans;
    }
/* So this code of iterative postorder
will be using and in it we will firstly
use 2 stacks 2 stacks are used as we 
have to save the parent ans well as do 
the reverse 

so what we will do is try to do 
preorder traversal and so in it we will 
at first N L R and after that we will 
reverse the preorder to postorder 
and so this is how we will get the 
traversal

At first we will push the root after that
in loop while we push the root to s2
we will push its left and right children 
into the stack and so in the next 
iteration we will get the right 
child as the first and so we will use
it in that manner 
*/
