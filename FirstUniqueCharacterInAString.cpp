int firstUniqChar(string s) {
    int n=s.length();
    unordered_map<char,int> mp;
    queue<int> q;
        
    for(int i=0; i<n ; i++){
    if(mp.find(s[i])==mp.end()){
    q.push(i);
    }
    mp[s[i]]++;
    }

    while(q.size()>0 && mp[s[q.front()]]>1){
    q.pop();
    }
    return q.empty() ? -1 : q.front();
}
// we will use queue to store the 
// indexes and via them we will 
// push only the first occurrence 
// of the element in queue and 
// after that we will process 
// the elements in queue in linear 
// order
