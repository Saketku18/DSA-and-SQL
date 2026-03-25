class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string> ans;
        string str="";
        set<string> st;
        for(int i=0;i<s.size();i++){
            str+=s[i];
            if(st.find(str)==st.end()){
                st.insert(str);
                ans.push_back(str);
                str="";
            }
        }
        return ans;
    }
};