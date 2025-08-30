class Solution {
public:
    int tribonacci(int n) {
    int temp1=0;
    int temp2=1;
    int temp3=1;
    if(n==0) return temp1;
    if(n==1) return temp2;
    if(n==2) return temp3;
    for(int i=2 ; i<n ; i++){
    int temp=temp1+temp2+temp3;
    temp1=temp2;
    temp2=temp3;
    temp3=temp;
    }
    return temp3;
    }
};
// this will be just like 
//Fibonacci with a different recurring 
//relation
