class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int c=0;
        string ans;
        while(i>=0 && j>=0){
            int p=a[i]-'0';
            int q=b[j]-'0';
            int sum=p+q+c;
            c=sum/2;
            ans+=to_string(sum%2);
            i--;
            j--;
        }
        while(i>=0){
          int p = a[i] - '0';
            int sum = p + c;
            c = sum / 2;
            ans += to_string(sum % 2);
            i--;
        }
        while(j>=0){
              int q = b[j] - '0';
            int sum = q + c;
            c = sum / 2;
            ans += to_string(sum % 2);
            j--;
        }
        if(c>0){
            ans+="1";
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};