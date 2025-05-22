class Solution {
  public:
    int minDeletions(string s) {
    int n=s.length();
    string s1=s;
    reverse(s1.begin(),s1.end());
    string s2=s;
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
    if(i==0 || j==0){
    dp[i][j]=0;
    }
    else if(s1[i-1]==s2[j-1]){
    dp[i][j]=1+dp[i-1][j-1];    
    }
    else dp[i][j]=max(dp[i-1][j]
    ,dp[i][j-1]);
    }
    }
    int len=dp[n][n];
    return n-len;
        
    }
};
/* So in this question basically we
have to find the minimum number of 
elements to delete so that we could
have the resultant as a palindrome 

So we will first find the longest
palindromic subsequence and upon finding
it we will reduce it from 
return n-dp[n][n];
so this way we will get ans*/
