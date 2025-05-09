class Solution
{
    public:
    void rec(string str, int k, int a, string &ans){
        ans=max(ans,str);
        if(k==0) return;
        for(int i=a;i<str.length()-1;i++){
            for(int j=i+1;j<str.length();j++){
                if(str[j]>str[i]){
                    swap(str[i],str[j]);
                    rec(str,k-1,i+1,ans);
                    swap(str[i],str[j]);
                }
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       rec(str,k,0,ans);
       return ans;
    }
};
/* this is recursive code jn which we will
put the recursion and if the digit is 
larger then their is possibility of 
swapping here and then we will swap
this will also keep the condition to 
keep the maximum number*/
