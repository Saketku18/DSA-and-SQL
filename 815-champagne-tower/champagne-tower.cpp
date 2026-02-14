class Solution {
public:
double dp[101][101];
double solve(int poured, int r, int c){
    if(c<0||c>r)
    return 0.0;
    if(r==0 && c==0)
    return poured;
    if(dp[r][c]!=-1.0)
    return dp[r][c];
    double left=max(0.0,(solve(poured,r-1,c-1)-1)/2.0);
    double right=max(0.0,(solve(poured,r-1,c)-1)/2.0);
    return dp[r][c]=left+right;
}
    double champagneTower(int poured, int query_row, int query_glass) {
        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=query_glass;j++){
                dp[i][j]=-1.0;
            }
        }
        return min(1.0,solve(poured,query_row,query_glass));
    }
};