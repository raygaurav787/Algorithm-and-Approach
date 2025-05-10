class Solution {
  public:
    string longestPalin (string S) {
        if(S.size() == 1) return S;
        int length = 0;
        string answer = "";
        
        for(int i = 0; i < S.size(); i++) {
            int left = i; 
            int right = i;
            
            // Odd length Palindrome
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
            
            // Even length Palindrome
            left = i;
            right = i + 1;
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
        }
        
        return answer;
    }
};
/* So basically here could be 2 things 
either that it will expand from a 
odd part and so we will be expanding it
otherwise their would be a even palindrome 
which will expand on both the sides 
so thats how we will use*/
