int maxWater(vector<int> &arr) {
    int n=arr.size();
    vector<int> left(n);
    vector<int> right(n);
    
    right[n-1]=arr[n-1];
    for(int i=n-2; i>=0 ;i--){
    right[i]=max(right[i+1],arr[i]);
    }
    
    int ans=0;
    int leftmax=arr[0];
    
    for(int i=0;i<n;i++){
    leftmax=max(leftmax,arr[i]);
    int rightmax=right[i];
    if(arr[i]<leftmax && arr[i]<rightmax)
    {
    ans+=min(leftmax,rightmax)-arr[i];
    }
    }
    
    return ans;
        
    }
