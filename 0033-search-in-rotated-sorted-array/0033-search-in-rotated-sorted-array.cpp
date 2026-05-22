class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
        // Check each element one by one
        if (nums[i] == target)
            return i;
    }
    // Key not found
    return -1;
    }
};