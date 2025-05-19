Node* solve(string &str,int &i){
    int n=str.length();
    int num=0;
// converting the multidigit no
    while(i<n && isdigit(str[i])){
    num=num*10+(str[i]-'0');
    i++;
    }
// making root node
    Node* root=new Node(num);
    if(i<n && str[i]=='('){
    i++;
// going to the numeral part
    if(str[i]==')'){
    root->left=NULL;
    i++;
// if no element than null
    }
    else{
// if numeral present than another fn call
    root->left=solve(str,i);
    i++;
    }
    }
    if(i<n && str[i]=='('){
// same as above
    i++;
    (str[i]==')'){
    root->right=NULL;
    i++;
    }
    else{
    root->right=solve(str,i);
    i++;
    }
    }
// returning the made subtree.
    return root;
    }
    Node *treeFromString(string str) {
//giving the input as index as it 
will be blockwise/recurrent
    int idx=0;
    return solve(str,idx);
    }
};
/* 
