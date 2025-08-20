

dp[i][j]=number of sqr ending at 
row i and col j

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
int n=matrix.size();
int m=matrix[0].size();
vector<vector<int>> dp(n, vector<int> (m,0));
int ans=0;
// variable to store number of sqr
for(int i=0;i<n;i++){
dp[i][0]=matrix[i][0];
ans+=dp[i][0];
}
//first row have sqr of size 1
for(int i=1;i<m;i++){
dp[0][i]=matrix[0][i];
ans+=dp[0][i];
}
// first colchave sqr of size 1
// (0,0) must not be counted twice
for(int i=1;i<n;i++){
for(int j=1;j<m;j++){
if(matrix[i][j]==1){
dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
        }
// top, top left and left wale ke
minimum ko lo aur 1 se add krdo 
to get the minimum size of sqr 
as we will take the sqr from these 3
ans+=dp[i][j];

}
}
        return ans;
