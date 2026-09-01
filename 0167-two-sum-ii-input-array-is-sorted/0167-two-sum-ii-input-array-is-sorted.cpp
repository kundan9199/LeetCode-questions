class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st =0;
        int end = numbers.size()-1;
        while(st<end){
            int cursum = numbers[st] + numbers[end];
            if(cursum == target){
                return {st+1, end+1};
            }
            else if(cursum<target){
                st++;
            }
            else{
                end--;
            }
        }
        return {};
    }
};