class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        int n=nums.size();
        int p=nums[0];
        for(int i=1;i<n;i++){
                if(p<nums[i]){
                    maxi=max(maxi,nums[i]-p);
                }
                 p=min(p,nums[i]);
            }

        return maxi;
    }
};