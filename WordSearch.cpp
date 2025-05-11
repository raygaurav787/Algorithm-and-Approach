
class Solution {
  public:
    
    bool dfs(vector<vector<char>>& mat,string word,int idx, 
    int i,int j,
    int n,int m){
    if(i<0 || j<0 || i>=n || j>=m) return false;
    if(word[idx]!=mat[i][j]) return false;
    if(idx==word.length()-1) return true;
    
    char temp=mat[i][j];
    mat[i][j]='*';
    
    bool a=false;
    bool b=false;
    bool c=false;
    bool d=false;
    
    a=dfs(mat,word,idx+1,i+1,j,n,m);
    b=dfs(mat,word,idx+1,i-1,j,n,m);
    c=dfs(mat,word,idx+1,i,j+1,n,m);
    d=dfs(mat,word,idx+1,i,j-1,n,m);
    
    mat[i][j]=temp;
    return a||b||c||d;
    
    }
    
    
    bool isWordExist(vector<vector<char>>& mat, string& word) {
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(dfs(mat,word,0,i,j,n,m)){
    return true;
    }
    }
    }
    return false;
    }
};
/* Here we are using DFS with the 
Backtracking and so basically in it we 
will run dfs from all the position 
and call a utility function for dfs

Now for each of dfs we will go to the 
next alphabet and call dfs for it 
and so using it we can we will backtrack
to the first call and return true if 
all the after alphabet have been found
and so 

we will take 4 direction and then we will
do or of all the four direction to find our
final results*/
