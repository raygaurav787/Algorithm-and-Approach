
// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
    priority_queue<int, vector<int> 
    ,greater<int>>pq;
    int n=arr.size();
    for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
    sum+=arr[j];
    pq.push(sum);
    if(pq.size()>k) pq.pop();
    }
    }
        return pq.top();
        
    }
};
/* We will use a n^2 approach where we will
calculate the sum of the subarrays and so
due to it we will take sum and after that
we will push it in the heap and when its
size>k then we will pop it and so after
that we will at the end of both the loops
we will return the pq.top().*/
