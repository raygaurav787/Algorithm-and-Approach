vector<int> longestSubarray(vector<int>& arr, int x) {
    int n=arr.size();
    int curr=0;
    int mx=0;
    int ind=0;
    int j=0;
    multiset<int> st;
    for(int i=0;i<n;i++){
    st.insert(arr[i]);
    curr++;
    while((*st.rbegin()-*st.begin())>x){
    st.erase(st.find(arr[j++]));
    curr--;
    }
    if(curr>mx){
    mx=curr;
    ind=i;
    }
    
    }
    return vector<int>(arr.begin()+ind-mx+1,
    arr.begin()+ind+1);
        
    }
/* Here we will use sliding window where 
we will take the 2 pointers i and j now
i will mive due to the for loop and 

set will keep it in a sorted order and so
it will keep on increasing and so then
due to the condition we can shrink it and 
so and whenever curr becomes larger than 
mx then we will save it and return it in 
a vector*/
