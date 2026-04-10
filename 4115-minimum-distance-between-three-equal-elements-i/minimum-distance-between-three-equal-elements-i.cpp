class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dis=1e9;
        bool f=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                      int dist=abs(i-j)+abs(j-k)+abs(k-i);
                        f=1;
                        dis=min(dis,dist);
                    }
                }
            }
        }
        if(f==0)
        return -1;
        return dis;   
    }
};