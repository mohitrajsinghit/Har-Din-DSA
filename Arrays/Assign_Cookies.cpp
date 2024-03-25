//Assign Cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int Total=0,child=0,cookie=0;
        while(child < g.size() && cookie < s.size()){
            if(s[cookie] >= g[child]){
                Total++;
                child++;
            }
            cookie++;
        }
        return Total;
    }
};
