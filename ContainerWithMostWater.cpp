int maxWater(vector<int> &arr) {
    int n=arr.size();
    int l=0;
    int h=n-1;
    int ans=0;
    while(l<=h){
    ans=max(ans,((h-l)*min(arr[l],
    arr[h])));
    if(arr[l]<arr[h]) l++;
    else h--;
    }
    return ans;
    }
// This is a classic 2 pointer 
// question where we will be given 
// two pointer which will point 
// at 2 different indexes and so
// we find the area of it using
// the minimum of the both walls 
// arr[l] & arr[r] 
// and then we will use the 
// monotonius nature by moving 
// the pointer accordingly so it 
// will be getting always larger 
// area due to our pointers moving.
