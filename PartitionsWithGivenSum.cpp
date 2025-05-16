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
/* Approach based on Knapsack and so 
we will know that s1+s2=sum and s1-s2=d
and so we can say that s1=sum+d/2

now dp[i][j]=number of ways to make j 
using i items (recurrence relation).

now we will make 2 cases if j<arr[i-1]
then the cases will remain same because 
we want to know the number of ways when 
we do not include the arr[i-1] which will 
remain same as the old case of (i-1)

In the other xase we have to do the 
sum as their is or between them of pick
case and not pick case so as to get the 
answer*/
