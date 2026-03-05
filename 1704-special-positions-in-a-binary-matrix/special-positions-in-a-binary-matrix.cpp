class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    bool f=1;
                    for(int k=0;k<m;k++){
                        if(k!=i && mat[k][j]==1){
                        f=0;
                        break;
                        }
                    }
                    for(int p=0;p<n;p++){
                        if( p!=j && mat[i][p]==1){
                        f=0;
                        break;
                        }
                    }
                    if(f)
                    count++;
                }
            }
        }
        return count;
    }
};