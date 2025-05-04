int findSubString(string& str) {
    unordered_map<char,int> mp;
    for(char &c : str){
    mp[c]++;
    }
    int distinct=mp.size();
    int n=str.length();
    int i=0;
    int j=0;
    int mn=n;
    mp.clear();
    while(j<n){
    mp[str[j]]++;
    while(i<n && mp.size()>=distinct){
    mn=min(mn,j-i+1);
    mp[str[i]]--;
    if(mp[str[i]]==0) mp.erase(str[i]);
    i++;
    }
    j++;
    }
    return mn;
    }
/*
this will be based on the sliding window 
principle in which we will assume 2 poi
nters at i=0 and j=0 now we will calculate
the total number of distinct elements

now due to this we can know that in the 
inside loop whenever the number of element
crosses is more than or equal to distinct 
than we will reduce it using inner while 
loop 

for every iteration of j we want the 
minimum size of window and so we will 
use the while in the inmer loop and 
not if*/
