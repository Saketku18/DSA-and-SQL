class Solution {
public:
    string rev(string s) {
        reverse(s.begin(), s.end());

        int i = 0;
        while (i < s.size() && s[i] == '0') i++;

        return (i == s.size() ? "0" : s.substr(i));
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> lastSeen;
        int dis = 1e9;

        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            int revNum = stoi(rev(s));

            // Check if current number matches previous reversed
            if (lastSeen.count(nums[i])) {
                dis = min(dis, i - lastSeen[nums[i]]);
            }

            // Store reversed value
            lastSeen[revNum] = i;
        }

        return (dis == 1e9 ? -1 : dis);
    }
};