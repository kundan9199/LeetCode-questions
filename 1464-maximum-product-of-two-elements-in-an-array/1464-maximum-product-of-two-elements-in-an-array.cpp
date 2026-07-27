class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //     int maxProduct = 0;
    //     for (int i = 0; i < nums.size(); i++) {
    //         for (int j = 1 + 1; j < nums.size(); j++) {
    //             maxProduct = Math.max((nums[i] - 1) * (nums[j] - 1), max);
    //         }
    //     }
    //     return maxProduct;
    // }
    sort(nums.begin(), nums.end());
    int s = nums.size();
    return (nums[s - 1] - 1)* (nums[s-2] - 1);
    }
};