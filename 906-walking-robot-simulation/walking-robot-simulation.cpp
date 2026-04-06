class Solution {
public:
int sq(int x){
    return x*x;
}
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> obs;
          for(auto &o : obstacles){
           obs.insert({o[0], o[1]});
          }
          int ans=0;
        string face="north";
        int x=0,y=0;
        for(int i=0;i<commands.size();i++){
        if(commands[i] > 0){
        for(int step = 0; step < commands[i]; step++){
        int nx = x, ny = y;
        if(face == "north") ny++;
        else if(face == "east") nx++;
        else if(face == "west") nx--;
        else ny--;
        if(obs.count({nx, ny})) break;
        x = nx;
        y = ny;
        ans = max(ans, sq(x) + sq(y));
    }
}
     if(commands[i] == -1){ 
    if(face == "north") face = "east";
    else if(face == "east") face = "south";
    else if(face == "south") face = "west";
    else face = "north";
}
else if(commands[i] == -2){ 
    if(face == "north") face = "west";
    else if(face == "west") face = "south";
    else if(face == "south") face = "east";
    else face = "north";
}
        }
        return ans;   
    }
};