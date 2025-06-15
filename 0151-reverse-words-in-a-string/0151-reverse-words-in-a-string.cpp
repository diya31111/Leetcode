class Solution {
public:
    string reverseWords(string s) {
        string temp = "", ans = "";
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                temp += s[i];
            } else if (!temp.empty()) {
                // Add temp to the front of ans
                if (!ans.empty()) ans = temp + " " + ans;
                else ans = temp;
                temp = "";
            }
        }

        // Add the last word if exists
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};
