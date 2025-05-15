
class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
    int n=arr.size();
    vector<int> leftmin(n),rightmax(n);
    leftmin[0]=arr[0];
    for(int i=1;i<n;i++){
    leftmin[i]=min(leftmin[i-1],arr[i]);
    }
    rightmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
    rightmax[i]=max(rightmax[i+1],arr[i]);
    }
    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<n){
    if(leftmin[i]<=rightmax[j]){
    ans=max(ans,j-i);
    j++;
    }
    else i++;
    }
    return ans;
    }
};
/* right and left vectors for max & min*/
