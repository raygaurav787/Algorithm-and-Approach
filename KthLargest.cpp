class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
priority_queue<int, vector<int> , greater<int>> pq;        
int n=nums.size();
for(int i=0;i<n;i++){
pq.push(nums[i]);
if(pq.size()>k){
pq.pop();
}
}
return pq.top();
    }
};
// As we have been given kth largest 
we will be taking a min heap and 
whenever the size crosses k we
will pop the element 

// sp at the end we will get the kth 
largest element at the top of the pq.
// sp we return pq.top();
