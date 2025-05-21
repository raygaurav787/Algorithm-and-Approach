class Solution {
public:
 
 bool solve(vector<int> &piles,int h, int mid){
long long cnt=0;
long long n=piles.size();
for(int i=0;i<n;i++){
cnt+=ceil((double)piles[i]/(double)mid);
}
return cnt<=h;
 }
        
        
        int minEatingSpeed(vector<int>& piles, int h) {
long long cnt=0;
long long n=piles.size();
long long l=1;
long long r=*max_element(piles.begin(),piles.end());
long long mid;
long long ans=0;
while(l<=r){
mid=l+(r-l)/2;
if(solve(piles,h,mid)){
ans=mid;
r=mid-1;
}
        else l=mid+1;
}
return ans;
    }
};
/* Koko eating bananas we will assume 
that the earing speed be mid for a 
period than we can say that by that 
mid will lie between 1 and the maximum 
element and mid is basically value of k

Now as we want to minimize the value of
k we can say that we will check if 
it is possible at a certain value of 
mid if yes then do it otherwise we will
decrease and see the amswer for 
other potential values*/
