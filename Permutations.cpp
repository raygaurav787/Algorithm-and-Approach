class Solution {
  public:
    void solve(int idx, string &s, vector<string> &ans) {
    if (idx == s.length()) {
        ans.push_back(s);
        return;
    }

    unordered_set<char> used;
    for (int i = idx; i < s.length(); i++) {
        if (used.count(s[i])) continue; 
        used.insert(s[i]);
        swap(s[i], s[idx]);
        solve(idx + 1, s, ans);
        swap(s[i], s[idx]);
    }
}

vector<string> findPermutation(string &s) {
    vector<string> ans;
    sort(s.begin(), s.end()); 
    solve(0, s, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
};
/* standard backtracking format just 1
change will be that we will need to 
remive duplicates from it and so 
for that we  will be using set in it */
