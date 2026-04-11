class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int ans=1e9;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp){
            if(it.second.size()>=3){
                sort(it.second.begin(),it.second.end());
                for(int i=0;i+2<it.second.size();i++){
                    int d=2*(it.second[i+2]-it.second[i]);
                    ans=min(ans,d);
                }
            }
        }
        if(ans==1e9)
        return -1;
        return ans;
    }
};