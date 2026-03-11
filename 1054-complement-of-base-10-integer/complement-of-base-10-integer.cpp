class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

    int ans = 0;
    int i = 0;

    while(n > 0) {
        int bit = n & 1;        
        
        int flipped = bit ^ 1;    
        
        ans = ans | (flipped << i); 
        
        n = n >> 1;              
        i++;
    }

    return ans;
}
};