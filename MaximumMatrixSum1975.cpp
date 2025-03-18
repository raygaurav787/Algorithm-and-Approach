class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
 long long mn=LLONG_MAX;
 long long sum=0;
 int neg=0;
            
 for(const auto& vec : matrix){
 for(const auto& elem : vec){
 if(elem<0){
neg++;
 }
long long val=abs(elem);
sum+=val;
mn=min(mn,(long long)abs(val));
 }
 }
if(neg%2==1) sum-=2*mn;
return sum;
    }
};

//greedy algorithm says that if 
even number of -ve than nulllify them

//if odd no of -ve elem then 1 will 
be left at the end 

//we will find the minimum in magnitude 
from the given bunch and reduce it
twice from the whole sum 

// to find minimum in magnitude we will
first take abs() and then compare.
