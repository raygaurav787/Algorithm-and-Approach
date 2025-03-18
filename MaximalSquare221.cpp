class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
 int n=matrix.size();
int m=matrix[0].size();
vector<vector<int>> dp(n, vector<int>(m,0));
int mx=0;
for(int i=0;i<n;i++){
int num=matrix[i][0]-'0';
dp[i][0]=num;
mx=max(num,mx);
}
for(int j=1;j<m;j++){
int num=matrix[0][j]-'0';
dp[0][j]=num;
mx=max(num,mx);
}
//int mx=0;
for(int i=1;i<n;i++){
for(int j=1;j<m;j++){
if(matrix[i][j]=='1'){
dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
mx=max(dp[i][j],mx);
}
}
}
return mx*mx;
    }
};
//DP ON RECTANGLE

//Here square willl ve possible only when 
left,.top and top-left will have nonzero 

// so we will make base case that the first
row and first col will have max 1 elem
if matrix[i][0] or mateix[0][j] ==1

// and then we will process and find the 
mx and return mx square 

// relationship 
dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1})+1;
