class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            if (arr[high] == val) {
                high--;
                continue;
            } 
            if (arr[low] == val) {
                swap(arr[low], arr[high]);
                high--;
                low++;
            } 
            else {
                low++;
            }
        }
        return high + 1;
    }
};
