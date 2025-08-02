class Solution {
public:
    string longestPalindrome(string s) {
    if(s.length()<=1) return s;
    int n=s.length();
    auto expand=[&](int left,int right){
  while(left>=0 && right<n && 
    s[left]==s[right]){
    left--; right++;
  }
return s.substr(left+1,right-left-1);
    };
    string mx=s.substr(0,1);
    for(int i=0;i<s.length()-1;i++){
    string odd=expand(i,i);
    string even=expand(i,i+1);
    if(odd.size()>mx.size()) mx=odd;
    if(even.size()>mx.size()) mx=even;
    }
    return mx;
    }
};
