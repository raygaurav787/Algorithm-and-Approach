int maxLen(vector<int>& arr) {
    int n=arr.size();
    int mx=0;
    int sum=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0) mx=max(mx,i+1);
    else{
    if(mp.find(sum)!=mp.end()){
    mx=max(mx,i-mp[sum]);
    }
    }
    if(mp.find(sum)==mp.end()) mp[sum]=i;
    }
    return mx;
    }