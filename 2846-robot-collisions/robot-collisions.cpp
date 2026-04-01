class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths,
                                      string directions) {

        int n = positions.size();
        vector<pair<int,int>> pos;
        for (int i = 0; i < n; i++) {
            pos.push_back({positions[i], i});
        }
        sort(pos.begin(), pos.end());
        stack<pair<int,pair<int,char>>> st;
        for (int i = 0; i < n; i++) {
            int idx = pos[i].second;
            int currHealth = healths[idx];
            char currDir = directions[idx];
            while (!st.empty() && st.top().second.second == 'R' && currDir == 'L') {
                int topHealth = st.top().first;
                int topIdx = st.top().second.first;
                char topDir = st.top().second.second;
                st.pop();
                if (topHealth > currHealth) {
                    st.push({topHealth - 1, {topIdx, topDir}});
                    currHealth = 0;
                    break;
                }
                else if (topHealth < currHealth) {
                    currHealth -= 1;
                }
                else {
                    currHealth = 0;
                    break;
                }
            }

            if (currHealth > 0) {
                st.push({currHealth, {idx, currDir}});
            }
        }

        vector<int> res(n,-1);

        while (!st.empty()) {
            int health = st.top().first;
            int idx = st.top().second.first;
            res[idx] = health;
            st.pop();
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (res[i] != -1)
                ans.push_back(res[i]);
        }

        return ans;
    }
};