void solution(Node* root,int &sum){
   if(root==NULL) return ;
   solution(root->right,sum);
   sum+=root->data;
   root->data=sum;
   solution(root->left,sum);
}
Node* modify(Node *root)
{
   // Your code here
   int sum=0;
   solution(root,sum);
   return root;
}
