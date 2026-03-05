class Solution {
public:
    int minOperations(string s) {
        char prev='0';
        int count=0;
        if(s[0]=='0'){
            s[0]='0';
        }
        else{
            s[0]='1';
            count++;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]!=prev){
                prev=s[i];
            }
            else{
                count++;
               if(s[i]=='0')
               prev='1';
               else
               prev='0';
            }
        }
        int m=count;
        count=0;
        char prev2='1';
        if(s[0]=='1'){
            s[0]='1';

        }
        else{
            s[0]='1';
            count++;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]!=prev2){
                prev2=s[i];
            }
            else{
                count++;
               if(s[i]=='0')
               prev2='1';
               else
               prev2='0';
            }
        }
        m=min(m,count);
        return m;
    }
};