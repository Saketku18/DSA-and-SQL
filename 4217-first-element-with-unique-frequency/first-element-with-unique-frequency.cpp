class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int ans=-1;
        unordered_map<int,int> mp;
vector<int> order;
for(int i = 0; i < nums.size(); i++){
    if(mp.find(nums[i]) == mp.end()){
        order.push_back(nums[i]); 
    }
    mp[nums[i]]++;
}
        unordered_map<int,int> m;
         for(int i = 0; i < order.size(); i++){
            m[mp[order[i]]]++;
        } 
        for(int i=0;i<order.size();i++){
            int f=mp[order[i]];
            if(m[f]==1)
            return order[i];
        } 
        return -1;
        
    }
};