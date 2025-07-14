if(n<=1) return n;
int x=log2(n);
return (x*pow(2,x-1)+
(n-pow(2,x)+1)+
countSetBits(n-pow(2,x)));
/* count the number of set bits 
in the number range 1 to 2^x-1 
and multiply it 
Then from n to 2^x the MSB
Will be set so add them and 
for rest recursion*/        
    }