int kthSmallest(int m, int n, int k) {
    int low=1;
    int high=m*n;
    int ans;
    while(low<=high){
    int count=0;
    int mid=(low+high)/2;
    for(int i=1;i<=m;i++){
    count=count+min(mid/i,n);
    }
    if(count>=k){
    high=mid-1;
    ans=mid;
    }
    else low=mid+1;
     }
    return ans;
   }    
/* This codes solution will be that
we know that in a multiplication table
every row will have elements increasing 
like i,2*i,3*i,...,k*i...n*i and due to 
taht we have to use this property 
we can say that if p*i<=n so that it means
that p<=n/i which basically means their
are p elements which are smaller than 
or equal to n so we can use this property 
to get the total number of element 
less than it 

Than Binary Search is implemented on 
it and due to that we can count the 
number of elements less than or equal
to mid in each and ever row and 

by binary search we know that if it has 
many k elements which are less than or
equal to mid than we can say that it 
is one of the probable answer and so 
we can use it to and go in a smaller range 
*/

