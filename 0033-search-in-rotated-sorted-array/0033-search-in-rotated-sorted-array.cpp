class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            // Brute force approach ; if found return index
            if (nums[i] == target) {
                return i;
            }
        }
        // return -1 if not found
        return -1;
    }
};