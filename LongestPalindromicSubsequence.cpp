int longestPalinSubseq(string &s) {
    string s2=s;
    reverse(s2.begin(),s2.end());
    int n=s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
    if(i==0 || j==0){
    dp[i][j]=0;
    }
    else if(s[i-1]==s2[j-1]){
    dp[i][j]=1+dp[i-1][j-1];
    }
    else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
    }
    return dp[n][n];
        
}
/* So basically we have taken the 
original string and then we have 
reversed the string such that we 
will have to apply lcs in both 
the strings and then the
value at dp[i][j]=will give the 
value of longest string at the
index i for s1 and index j for s2.

This will give us the value of 
longest palindromic subsequence.
  */

  
