
class Solution {
  public:
int countPartitions(vector<int>& arr, int d) {
int n=arr.size();
int mod=1e9+7;
int sum=0;
for(int i=0; i<n; i++){
sum += arr[i];
}

sum+=d;  
   if(sum%2==1) return 0;  
   sum/=2;  
     
   vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));  
     
   dp[0][0]=1;  
     
   for(int i=1; i<=n; i++){  
       for(int j=0; j<=sum; j++){  
           if(j<arr[i-1]){  
               dp[i][j]=dp[i-1][j];  
           }else{  
               dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;  
           }  
       }  
   }  
     
   return dp[n][sum];  
}     
        
    };
