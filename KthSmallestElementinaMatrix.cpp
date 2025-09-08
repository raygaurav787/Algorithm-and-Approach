
int low=0;
int high=10000;
int ans=0;
int n=mat.size();
int mid,cnt;
while(low<=high){
mid=low+(high-low)/2;
cnt=0;
for(int i=0;i<n;i++){
cnt+=upper_bound(mat[i].begin(),
mat[i].end(),mid)-mat[i].begin();
}
if(cnt<k){
low=mid+1;
}
else{
ans=mid;
high=mid-1;
}
}
return ans;


// we will first select the mid 
// for each and every rotation 

// then we will iterate over 
//every row and check that how
// many elements are their which
// are <=mid in each and every row 
// and will take cumulative sum
// of them to present if fits then 
// ans otherwise otherwise not

