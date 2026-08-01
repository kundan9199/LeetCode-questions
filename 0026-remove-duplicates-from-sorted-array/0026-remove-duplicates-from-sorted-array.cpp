class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if(s <= 1){
            return s;
        }
        int idx =1;
        for(int i =1; i<s; i++){
            if(nums[i]!=nums[i-1]){
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};