int findTarget(vector<int>& arr, int target) {
   int st=0;
   int end=arr.size();
   int n=arr.size();
   while(st<=end){
   int mid=(st+end)/2;
   if(arr[mid]==target) return mid;
   else if(arr[mid-1]==target && mid>0) return mid-1;
   else if(arr[mid+1]==target && mid+1<n) return mid+1;
   else{
   if(target>arr[mid]) st=mid+1;
   else end=mid-1;
   }
   }
   return -1;
        
    }
