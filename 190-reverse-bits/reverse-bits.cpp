class Solution {
public:
    int reverseBits(int n) {
        string s="";
        for(int i=0;i<32;i++){
            s+=to_string(n%2);
            n/=2;
        }
        int p=s.size()-1;
        long long pow=1;
        int ans=0;
        for(int i=p;i>=0;i--){
            int d=s[i]-'0';
            ans+=d*pow;
            pow*=2;
        }
        return ans;
    }
};