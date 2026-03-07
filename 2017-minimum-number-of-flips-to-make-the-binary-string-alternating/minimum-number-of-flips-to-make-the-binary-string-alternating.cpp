class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int diff1 = 0, diff2 = 0;
        int ans = INT_MAX;
        int l = 0;

        for(int r = 0; r < 2*n; r++) {

            char p1 = (r % 2) ? '1' : '0';
            char p2 = (r % 2) ? '0' : '1';

            if(t[r] != p1) diff1++;
            if(t[r] != p2) diff2++;

            if(r - l + 1 > n) {
                char lp1 = (l % 2) ? '1' : '0';
                char lp2 = (l % 2) ? '0' : '1';

                if(t[l] != lp1) diff1--;
                if(t[l] != lp2) diff2--;
                l++;
            }

            if(r - l + 1 == n)
                ans = min(ans, min(diff1, diff2));
        }

        return ans;
    }
};