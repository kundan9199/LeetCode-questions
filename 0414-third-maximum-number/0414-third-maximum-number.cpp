class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> unique_nums(s.begin(), s.end());
        int uniqueSize = unique_nums.size();
        if (uniqueSize < 3) {
            return unique_nums[uniqueSize - 1];
        }
        return unique_nums[uniqueSize - 3];
    }
};