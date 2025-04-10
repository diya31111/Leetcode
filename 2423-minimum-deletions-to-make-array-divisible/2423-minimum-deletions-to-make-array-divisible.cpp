class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g = 0;
        for(auto& it: numsDivide){
            g = gcd(g, it);
        }
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for(auto& it: nums){
            if(g%it == 0) return cnt;
            else cnt++;
        }
        return -1;
    }
};