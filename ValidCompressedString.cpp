
// User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
    int i=0;
    int j=0;
    int n=S.length();
    int m=T.length();
    while(i<n && j<m){
    if(S[i]==T[j]){
    i++;
    j++;
    continue;
    }
    else if(isdigit(T[j])){
    int num=0;
    while(isdigit(T[j])&& j<m){
    num=num*10+(T[j]-'0');
    j++;
    }
    i+=num;
    }
    else return 0;
    }
    return i==n && j==m;
    }
};
/* Based on 2 pointer approach in it 
we will just move the pointers accordingly
and whenever inconsistencies are found
we will return false

And so at end both the pointers should
be at end of string for both if 
their were no inconsistency*/
