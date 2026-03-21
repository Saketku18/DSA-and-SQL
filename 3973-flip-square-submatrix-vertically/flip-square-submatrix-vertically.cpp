class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==x && j==y){
                   int u=i;
                   int s=i+k-1;
                   while(i<s){
                   for(int p=j;p<j+k;p++){
                   swap(grid[i][p],grid[s][p]);
                   }
                   i++;
                   s--;
                   } 
                }
            }
        }
        return grid;
    }
};