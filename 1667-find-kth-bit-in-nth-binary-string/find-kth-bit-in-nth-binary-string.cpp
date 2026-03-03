class Solution {
public:
    void invert(string& s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            s[i]='1';
            else{
                s[i]='0';
            }
        }
    }
    // void rev(string& s){
    //     reverse(s.begin(),s.end());
    // }
    string fun(int n){
        if(n==1)
        return "0";
        string prev=fun(n-1);
        string temp=prev;
        invert(temp);
        reverse(temp.begin(),temp.end());
        return prev+"1"+temp;
    }
    char findKthBit(int n, int k) {
        string p=fun(n);
        return p[k-1];  
    }
};