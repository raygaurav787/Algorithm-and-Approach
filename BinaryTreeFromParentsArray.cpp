Node *createTree(vector<int> parent) {
    int n=parent.size();
    map<int,vector<int>> mp;
    Node *root=NULL;
    for(int i=0;i<n;i++){
    if(parent[i]==-1) root=new Node(i);
    else mp[parent[i]].push_back(i);
    }
    queue<Node*> q;
    q.push(root);
    map<int,Node*> created;
    created[root->data]=root;
    while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    vector<int> &childlist=mp[temp->data];
    if(!childlist.empty()){
    Node *leftchild=new Node(childlist[0]);
    temp->left=leftchild;
    q.push(leftchild);
    created[leftchild->data]=leftchild;
    }
    if(childlist.size()==2){
     Node *rightchild=new Node(childlist[1]);
    temp->right=rightchild;
    q.push(rightchild);
    created[rightchild->data]=rightchild;   
    }
    }
    return root;
}
/* This is a very important question 
in which we have to convert the parents 
array into a real tree

In this question we will proceed by first
going to the converting and making
the root node the node which has value of 
-1 

and then we will map all the values of 
map from parent to child so each 
parent will be mapped to its line or 2 childs

then we will run bfs and in bfs we will
first take the node and fetch the vector
from it and in vector we will se if the size
is 1 then we will only make the left
child otherwise we will make the left 
as well as the rightchild */
