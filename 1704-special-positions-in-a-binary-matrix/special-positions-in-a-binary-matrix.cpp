class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        vector<bool> v(m,0);
        vector<bool> vi(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && !v[i] && !vi[j]){
                    bool f=1;
                v[i]=1;
                vi[j]=1;
                for(int k=0;k<m;k++){
                    if(k!=i && mat[k][j]==1){
                    f=0;
                    v[k]=1;
                    break;
                    }
                }
                for(int p=0;p<n;p++){
                    if(p!=j && mat[i][p]==1){
                        f=0;
                        vi[p]=1;
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