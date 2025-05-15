class Solution {
public:
    int partitionString(string s) {
   int n=s.length();
   int cnt=1;
   unordered_map<char,int> mp;
   for(int i=0;i<n;i++){
   mp[s[i]]++;
   if(mp[s[i]]>1){
   cnt++;
   mp.clear();
   mp[s[i]]++;
   }
   }
            return cnt;
    }
};
/* reset map in case of new partition*/
