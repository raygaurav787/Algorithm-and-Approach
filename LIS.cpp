class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
 int n=nums.size();
 vector<int> dp(n,1);
 for(int i=1;i<n;++i){
  for(int j=0;j<i;++j){
    if(nums[i]>nums[j]){
      dp[i]=max(dp[i],dp[j]+1);
    }
  }
 }
  return *max_element(dp.begin(),dp.end());
    }
};
/* In lis we will do is we will first
use n2 approach in it and so at first i
will be the pointer and then we will 
start from i and go forward now nums[i]
should be smaller than nums[j] and so 
we can place nums[j] before nums[i]
like 2,7 and after doing it we will 
maximise dp[i]=max(dp[i],dp[j]+1);
where the recurrence relation stands for
  the longest lis ending at index i*/
