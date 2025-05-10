

class Solution {
  public:
    
   string decode(string &s , int &idx){
   int times=0;
   string word="";
   while(idx<s.length()){
   if(s[idx]>='0' && s[idx]<='9'){
   times=times*10+(s[idx]-'0');
   }
   else if(s[idx]=='['){
   idx++;
   string temp=decode(s,idx);
   while(times--) word+=temp;
   times=0;
   }
   else if(s[idx]==']') return word;
   else word+=s[idx];
   idx++;
   }
   return word;
   } 
    
    string decodedString(string &s) {
    int idx=0;
  return decode(s,idx);
    }
};
/* We will have write a recursive function
which will take the idx as a parameter
so when a [] starts them we will first
calculate the number outside of it and 
then we will take the word inside of the []
and send it to a recursive code which 
will return us the interpreted sentence and
fue to that we will be able to work 
and will be able concatenate it and return 
it */
