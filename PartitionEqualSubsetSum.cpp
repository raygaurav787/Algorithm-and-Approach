
class Solution {
  public:
    
    bool solve(vector<int> &arr, int idx, int target, vector<vector<int>>&dp){
   if(target==0) return 1;
   if(idx<0 || target<0) return 0;
   if(dp[idx][target]!=-1) return dp[idx][target];
   
   bool take=solve(arr,idx-1,target-arr[idx],dp);
   bool not_take=solve(arr,idx-1,target,dp);
   return dp[idx][target]=take | not_take;
    } 
    
    
    bool equalPartition(vector<int>& arr) {
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=arr[i];
    }
    if(sum%2==1) return false;
    int target=sum/2;
    vector<vector<int>> dp(n+1, vector<int> (target+1,-1));
    return solve(arr,n-1,target,dp);
    }
};

//Now something we can say is that the if 
we have to partition it into equal sum than
both the portion should have sum/2;

//And even if one portion has sum/2 then 
the other portion would naturally have sum/2
as the sum as the total aggregate is sum.

//After that it is only bounded knapsack 
like problem where we have to take and 
not take condition and or of both of them.
