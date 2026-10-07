class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        max_ = nums[0]
        current_max = nums[0]
        for i in range(1, len(nums)):
            current_max = max(nums[i], current_max + nums[i])
            max_ = max(max_, current_max)
        return max_
