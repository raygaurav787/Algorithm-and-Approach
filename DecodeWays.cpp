class Solution {
public:
    
    int numDecodings(string s) {
  if(s.length()==0) return 0;
  
  vector<int> dp(s.length(),-1);
 return solve(0,s,dp);
    }
  int solve(int idx,string &s, vector<int> &dp){
  if(idx==s.length()) return 1;
  
  if(s[idx]=='0') return 0;
  if(dp[idx]!=-1) return dp[idx];
  int one_char=solve(idx+1,s,dp);
  int two_char=0;
  if(idx<s.length()-1 && (s[idx]=='1' ||(s[idx]=='2' && s[idx+1]<7)))
  two_char=solve(idx+2,s,dp);
 return dp[idx]=one_char+two_char;
  }
};
/* In this we will find the total 
number of ways in which we will find
the answer of it like we will find
the total number of ways to partition.

we will use dp to work on it */
