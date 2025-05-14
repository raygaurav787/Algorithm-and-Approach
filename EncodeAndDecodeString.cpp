string encode(vector<string>& s) {
        // code here
        string encode;
        for(int i=0;i<s.size();i++){
            encode+=s[i]+'#';
        }
        return encode;
    }

    vector<string> decode(string& s) {
        // code here
        vector<string>ans;
        string dec;
        for(auto it:s){
            if(it=='#'){
              ans.push_back(dec);  
              dec.clear();
            }
            else{
                dec+=it;
            }
        }
            return ans;
    }

/* # used to serialize as it lies beyound
256 ascii*/
