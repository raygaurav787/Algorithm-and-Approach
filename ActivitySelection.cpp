   static bool comp(const pair<int,int> &a, const pair<int,int> &b){
   return a.second<b.second;   
   }
   
   
    int activitySelection(vector<int> &start, vector<int> &finish) {
    int n=start.size();
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
    v.push_back({start[i],finish[i]});
    }
    sort(v.begin(),v.end(),comp);
    int var=v[0].second;
    int cnt=1;
    for(int i=1;i<n;i++){
    if(var<v[i].first){
    cnt++;
    var=v[i].second;
    }
    }
    return cnt;
    }
};


/* In this question we will first create 
a vector of pair of int and then we will 
sort it on the basis of the its finishing
time 

and then we will initialise a variable 
with 1 which is the minimum amount of 
segment 

and then whenever the next one has a 
larger starting time then we will be 
increment the variable used here */
