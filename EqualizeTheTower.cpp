long long solve(vector<int>& heights,vector<int>& cost,
    int target){
    long long total=0;
    for(int i=0;i<heights.size();i++){
    total+=1LL*abs(target-heights[i])*cost[i];
    }
    return total;
    }
    
    
    int minCost(vector<int>& heights, vector<int>& cost) {
    int low=*min_element(heights.begin(),heights.end());
    int high=*max_element(heights.begin(),heights.end());
    long long ans=LLONG_MAX;
    while(low<=high){
    long long mid=low+(high-low)/2;
    long long cost1=solve(heights,cost,mid);
    long long cost2=solve(heights,cost,mid+1);
    ans=min(cost1,cost2);
    if(cost1<cost2) high=mid-1;
    else low=mid+1;
    }
    return ans;
    }
};

/* The cost function is a V shaped 
in nature and so we can use the 
binary search in it as we can change
the values 

So we will take 2 values of the cost 
function cost1 and cost2 

Now their can be 2 cases first being the
case in which we can cost2 being larger 
than rhe cost1 and due to that
we can say that the left portion will 
have smaller values and so we will 
go their as we want the minimum cost*/
