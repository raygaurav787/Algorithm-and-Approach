vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    vector<int> ans;
    int n=arr.size();
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<k;i++){
    pq.push({arr[i],i});
    }
    ans.push_back(pq.top().first);
    
    for(int i=k;i<n;i++){
    pq.push({arr[i],i});
    while(pq.top().second<=i-k) pq.pop();
    ans.push_back(pq.top().first);
    }
    return ans;   
    }
/* The approach here used would be that
we would take a priority_queue which will
have 2 parameters one of them would be 
element and other would be index and so
maximum will be up there and so in every 
iteration we would push it and then check
whether it the top element is valid or 
invalid if invalid then we will pop it*/
