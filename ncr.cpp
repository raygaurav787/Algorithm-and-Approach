const int mod = 1e9+7;
    int binaryexp(int x, int n) {
        if(n == 0) return 1;
        int temp = binaryexp(x, n/2);
        if(n%2 == 0) return (1LL *temp * temp)%mod;
        else return (((1LL*temp*temp)%mod)*x)%mod;
    }
    
public:
    int nCr(int n, int r){
        if(r > n) return 0;
        if(r == n) return 1;
        long long ans = 1;
        //first calculating the numerator
        for(int i = 1; i<=r; i++) {
            ans = (ans*1LL*(i+(n-r)))%mod;
        }
        //now calculating the final ans by dividing the ans with the terms in denominator 
        for(int i = 1; i<=r; i++) {
            int inv = binaryexp(i, mod-2);
            ans = ((ans%mod) * (inv%mod))%mod;
        }
        return ans;
    }
/* Here we will first break the ncr 
formula where we will take the numerator
and in it we will numerator will have 
the numbers ranging from n to (n-r+1)
and denominator will have numbers of 
product ranging from 1 to r.

And so we will the use the fermats 
little theorem to 
we know that 
(a/b)mod m=a*inv(b)*mod m
now we know that 
now modular inverse of a is 
(a^mod-2)%mod so we will use both 
formulas to calculate it*/

