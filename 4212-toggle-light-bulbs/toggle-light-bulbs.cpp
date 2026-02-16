class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<bulbs.size();i++){
            mp[bulbs[i]].push_back(i);
        }
        for(auto it:mp){
            if(it.second.size()%2==1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};