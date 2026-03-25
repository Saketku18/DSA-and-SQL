class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> row;
        vector<int> col;
        long long int s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            long long int sumr=0;
            for(int j=0;j<n;j++){
            sumr+=grid[i][j];
            }
            row.push_back(sumr);
        }
        for(int i=0;i<n;i++){
            long long int sumr=0;
            for(int j=0;j<m;j++){
            sumr+=grid[j][i];
            }
            col.push_back(sumr);
        }
        long long int p=s;
        long long int sum1=0;
        for(int i=0;i<m;i++){
            if(sum1==s-sum1)
            return true;
            sum1+=row[i];
        }
        long long int sum2=0;
        for(int i=0;i<n;i++){
            if(sum2==p-sum2)
            return true;
            sum2+=col[i];
        }
        return false;
    }
};