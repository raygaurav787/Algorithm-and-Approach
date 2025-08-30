class Solution {
public:
     findLucky(vector<int>& arr) {
    int n=arr.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
    mp[arr[i]]++;
    }
    int ans=-1;
    for(auto &[key,freq] : mp){
    if(key==freq){
    ans=max(ans,freq);
    }
    }
    return ans;
    }
};
