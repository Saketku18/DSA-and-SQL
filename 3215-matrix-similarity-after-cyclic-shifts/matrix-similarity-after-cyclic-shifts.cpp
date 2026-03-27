class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans=mat;
         k=k%n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i%2==0){
                    ans[i][j]=mat[i][(j+k)%n];
                }
                else{
                    ans[i][j]=mat[i][(j-k+n)%n];
                }
            }
        }
        if(ans==mat)
        return true;
        return false;    
    }
};