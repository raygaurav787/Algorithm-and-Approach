vector<int> ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    while(temp){
    ans.push_back(temp->data);
    q.push(temp->left);
    temp=temp->right;
    }
    }
    return ans;
/* 
Method: 

Push the root node onto a queue.
Take the next node from the front of the queue.
Add this node's data to the end of the answer vector.
Push the node's left child onto the back of the queue.
Move on to the node's right child.
Repeat steps 3 through 5 until reaching a null node, processing all the node's right descendants.
Take the next node off the queue and repeat: Go to step 2 if the queue is nonempty, otherwise we're done.
Complexity analysis: 

Despite using a doubly-nested while loop
, only the left children are processed
in the outer loop, whereas all of a left 
child's right descendants are processed 
in one go in the inner loop -- the
left child of each right descendant 
being enqueued. Thus, every node
that is a left child needs to be
processed twice, and every node
that is a right child, only once.
For space considerations, in the 
worst case, every node has a left 
child, resulting in n/2 queue storage 
for the top diagonal. O(n) time/space.
