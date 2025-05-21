int KthSmallest(int m, int n, int k) {
       int low=1;
       int high=m*n;
       int ans;
       while(low<=high)
       {
           int count=0;
           int mid=(low+high)/2;
           for(int i=1;i<=m;i++)//find the number of smaller element than mid in each row
           {
               count=count+min(mid/i,n);
           }
           if(count>=k)
           {
               high=mid-1;
               ans=mid;
           }
           else
              low=mid+1;
       }
       return ans;
   }
