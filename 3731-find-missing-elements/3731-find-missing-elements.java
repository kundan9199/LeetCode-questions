class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        Arrays.sort(nums);
        List<Integer> result = new ArrayList<>();
            for (int i = 0; i < nums.length - 1; i++) {
            // Checks if there is a gap between consecutive numbers
            if (nums[i + 1] - nums[i] > 1) {
                for (int v = nums[i] + 1; v < nums[i + 1]; v++) {
                    result.add(v);
                }
            }
        }
        return result; 
    }
}