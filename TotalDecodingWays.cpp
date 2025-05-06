const int mod = 1e9 + 7;
int dp[10001];
int solve(int i, int n, string &str)
{
	 if(str[i] == '0') return 0;
	 if(i >= n) return 1;
	 if(dp[i] != -1) return dp[i];
	 int ans = 0;
	 if(str[i] != '0')
	 {
	     ans += solve(i+1,n,str);
	 }
	 if(i + 1 < n && ((str[i] == '1' && str[i+1] <= '9') || (str[i] == '2' && str[i+1] < '7')))
	 {
	      ans += solve(i+2,n,str);
	 }
	 return dp[i] = ans%mod;
}
int CountWays(string str){
	 memset(dp,-1,sizeof(dp));
	 return solve(0,str.size(),str);
}
