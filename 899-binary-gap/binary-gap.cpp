class Solution {
public:
    int binaryGap(int n) {
        bitset<32> b(n);
        string s=b.to_string();
        int i=0;
        int j=0;
        int maxlen=0;
        while(j<s.size()){
            if(s[j]=='1')
            break;
            j++;
        }
        i=j;
        j++;
        while(j<s.size()){
            if(s[j]=='1'){
                maxlen=max(maxlen,j-i);
                i=j;
            }
            j++;
        }
        return maxlen;   
    }
};