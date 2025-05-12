int longestStringChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });

        unordered_map<string, int> dp;
        int ans = 0;

        for (string &word : words) {
            int maxLength = 0;
            for (int i = 0; i < word.size(); i++) {
                string prev = word.substr(0, i) + word.substr(i + 1);
                maxLength = max(maxLength, dp[prev]);
            }
            dp[word] = maxLength + 1;
            ans = max(ans, dp[word]);
        }

        return ans;
    }
/* Here we will first sort the words 
according to their size and after that we
will iterate over all the words and find 
the largest sized chain for each of the 
created word omitting 1 alphabet now when
the inmer loop ends we will be sure that 
this is the maximum size chain so we 
will store the maximum chain for g
the given element and take max such 
that we could get the maximum possible 
value between all the elements*/
