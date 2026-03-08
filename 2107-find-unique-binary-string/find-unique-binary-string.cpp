class Solution {
public:
string bin(int n,int s){
    string ans="";
    while(n>0){
        ans+=to_string(n%2);
        n/=2;
    }
    while(ans.size()<s){
        ans+="0";
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=1;
        }
        for(int i=0;i<(1<<n);i++){
            string a=bin(i,n);
            if(mp[a]==0)
            return a;
        }
        return "";
    }
};