class Solution {
public:
    bool isCorrect(vector <int> &nums, int mid, int threshold){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i] / mid);
        }
        if(sum<=threshold) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            high=max(high, nums[i]);
        }
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(isCorrect(nums, mid, threshold)){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};