class Solution {
  public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K) {
sort(arr, arr+N);
        int maxsum=0;
        for(int i=N-1;i>0; i--)
            if(arr[i]-arr[i-1]<K){
                maxsum+=arr[i]+arr[i-1]; i--;
            }
        return maxsum;
    }
};
