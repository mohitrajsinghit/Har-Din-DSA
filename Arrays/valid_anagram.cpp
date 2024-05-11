class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map <char , int > mp;

        for (char c : s){
            mp[c]++;
        }

        for(char c : t){
            if(mp.find(c) != mp.end() && mp[c] > 0){
                mp[c]--;
            }else{
                return false;
            }
        }
        return true;
    }
};
