class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        string str = s+s;
        if(str.find(goal)!=-1) return true;
        else return false;
    }
};