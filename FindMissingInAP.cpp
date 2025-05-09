class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n=arr.size();
        int commonDiff;
        if(arr[1]-arr[0]<0)
        commonDiff=max(arr[1]-arr[0], arr[n-1]-arr[n-2]);
        else
        commonDiff= min(arr[1]-arr[0], arr[n-1]-arr[n-2]);
        int low = 0;
        int high = n-1;
        while(low < high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid] == arr[0] + commonDiff*mid)
            {   low = mid+1;
                
            }
            else{
                high = mid;
            }
        }
    //iska matlab yeh hai ki mismatch shuru
    //ho raha h last second element pe 
    //aur humko chahiye missing element 
    //but we dont know that the difference 
    //would be which so if it is equal 
    //to Common Difference than (low+1)*commondiff
    //otherwise it would be equal to arr[n-1]-diff

        if(low==n-1)
        {
            
            if(arr[n-1]-arr[n-2]!=(commonDiff))
            return arr[n-1]-commonDiff;
            else
            return arr[0]+commonDiff*(low+1);
        }
        
        return arr[0] + commonDiff*low;
    }
};
