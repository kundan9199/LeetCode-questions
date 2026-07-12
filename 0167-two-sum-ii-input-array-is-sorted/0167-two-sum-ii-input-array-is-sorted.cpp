class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0;
        int end = numbers.size()-1;

        while (st < end) {
            int curSum = numbers[st] + numbers[end];
            if (curSum == target) {
                return {st + 1, end + 1};
            } else if (curSum < target) {
                st++;
            } else {
                end--;
            }
        }
        return {};
    }

};