int findPlatform(vector<int>& arr, vector<int>& dep) {
    int n=arr.size();
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
    v.push_back({arr[i],dep[i]});
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
    pq.push(v[i].second);
    if(pq.top()<v[i].first) pq.pop();
    }
    return pq.size();
    }
};
/* Sorting based upon arrival time 
and then we are allocating platforms
using priority_queue and that will 
ensure that the minimum departure 
platform is at top and will increase
size of the pq when the condition 
is not satisfied and so at end will 
return the size of the pq will be no 
of platforms*/
