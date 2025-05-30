class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt =1;
        int maxi=1;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++){
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if(nums[i]==(nums[i-1]+1)){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxi = max(maxi, cnt);
        }
        if(n==0) return 0;
        return maxi;
    }
};