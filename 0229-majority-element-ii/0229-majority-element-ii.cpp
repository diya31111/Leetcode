class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cn1=0, cn2=0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(cn1==0 && el2!=nums[i]){
                cn1=1;
                el1=nums[i];
            }
            else if(cn2==0 && el1!=nums[i]){
                cn2=1;
                el2=nums[i];
            }
            else if(el1==nums[i]){
                cn1++;
            }
            else if(el2==nums[i]){
                cn2++;
            }
            else{
                cn1--;
                cn2--;
            }
        }
        vector <int> ls;
        cn1=0;
        cn2=0;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i]) cn1++;
            if(el2==nums[i]) cn2++;
        }
        int mini = int(nums.size() / 3) + 1;
        if (cn1 >= mini) ls.push_back(el1);
        if (cn2 >= mini) ls.push_back(el2);

        return ls;
    }
};