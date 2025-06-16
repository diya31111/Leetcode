class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int ctr=0;
        for(char c: s){
            if(c=='('){
                ctr++;
            }
            if(c==')'){
                ctr--;
            }
            maxi=max(ctr,maxi);
        }
        return maxi;
    }
};