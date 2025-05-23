vector<int> findLeastGreater(vector<int>& arr, int n) {
    set<int> st;
    vector<int> vec;
    for(int i=n-1;i>=0;i--){
    auto it=st.upper_bound(arr[i]);
    if(it==st.end()) vec.push_back(-1);
    else vec.push_back(*it);
    st.insert(arr[i]);
    }
    reverse(vec.begin(),vec.end());
    return vec;
    }
/* alternate set approach*/
