class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices==0 && cheeseSlices==0)
        return {0,0};
        // vector<int> ans;
        if(tomatoSlices%2!=0)
        return {};
        int sb=0;
        int n=tomatoSlices/2;
        for(int i=0;i<n;i++){
            sb++;
            int jb=(tomatoSlices-sb*2)/4;
           int cs= cheeseSlices-sb-jb;;
            if(sb*2+jb*4==tomatoSlices && cs==0)
            return {jb,sb};
        }
        return {};      
    }
};