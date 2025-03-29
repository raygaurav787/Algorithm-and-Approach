class Solution {
public:
    int maxProfit(vector<int>& prices) {
 int n=prices.size();
 vector<int> dp(n,0);
 int profit=0;
 int min_elem=INT_MAX;
 for(int i=0;i<n;i++){
 min_elem=min(min_elem, prices[i]);
 profit=max(profit, prices[i]-min_elem);
        
 }
return profit;
    }
};
// We will be here using Dp approach in
which we will first take as variable 
profit to be zero and then we will
as we will be taking max and so it will 
always be non negative

// and then we will take the min element
at and before that point and then we 
will maximise the profit and return it.
