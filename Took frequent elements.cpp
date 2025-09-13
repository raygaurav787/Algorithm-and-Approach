vector<int> topKFrequent(vector<int>& nums, int k) {
 int n=nums.size();
 unordered_map<int,int> mp;
 for(int i=0;i<n;i++){
 mp[nums[i]]++;
 }
vector<pair<int,int>> vec(mp.begin(),mp.end());
sort(vec.begin(),vec.end(),[](auto &a,
auto &b){
if(a.second!=b.second) return a.second>b.second;
return a.first>b.first;
});
 int limit=min(k,(int)vec.size());
 vector<int> ans;
 for(int i=0;i<limit;i++){
 ans.push_back(vec[i].first);
 }
return ans;
    }
// Custom Sort implementation 
