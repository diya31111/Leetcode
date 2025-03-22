class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> new_num = nums;
        int n = nums.size();
        k = k % n;
        for(int i = 0; i < n; i++){
            nums[i] = new_num[(i+n-k)%n];
        }
    }
};