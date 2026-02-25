class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        for(int x:nums){
            ans.push_back(x);
            while(ans.size()>=2 && ans.back()==ans[ans.size()-2]){
                long long val=ans.back()*2;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(val);
            }
        }
     
        return ans;
    }
};