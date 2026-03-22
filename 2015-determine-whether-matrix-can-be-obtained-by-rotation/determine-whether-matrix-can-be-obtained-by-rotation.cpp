class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int p=4;
        int n=mat.size();
        while(p--){
            bool f=1;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    swap(mat[i][j], mat[j][i]);
                }
                }
                for(int i=0;i<n;i++){
                    reverse(mat[i].begin(),mat[i].end());
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(mat[i][j]!=target[i][j]){
                            f=0;
                        }
                    }
                }
                if(f){
                    return true;
                }
            }
            return false;

        }
};