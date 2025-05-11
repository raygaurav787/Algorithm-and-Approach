class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
unordered_map<int, vector<int>>mp;
for(int i=0;i<manager.size();i++){
mp[manager[i]].push_back(i);
}
queue<pair<int,int>> q;
q.push(make_pair(headID,0));
int mx=0;
while(!q.empty()){
int cur=q.front().first;
int time=q.front().second;
q.pop();
int dur=time+informTime[cur];
mx=max(dur,mx);
for(auto it : mp[cur]){
q.push(make_pair(it,dur));
}
}
            return mx;
    }
};
/* We had to find the time required to 
inform all the employees in it and so to
do it we would have to make an adjacency 
list in which we will join the int(manager)
to vector<int> of all employees under him 

And then we will use bfs from the highest
manager and go down and down layerwise 
using bfs and then due to it we would 
have to see the maximum value of it and 
that would be our answer*/
