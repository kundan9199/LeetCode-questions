class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int s = numbers.size();
        // for(int i =0; i<s; i++){
        //     for(int j=i+1; j<s; j++){
        //         if(numbers[i]+numbers[j] == target){
        //         return {i+1,j+1};
        //     }
        //     }
        // }
        // return {};

        int s = numbers.size();
        int st = 0;
        int end = s-1;
        int cursum = 0;
        while(st<end){
            cursum = numbers[st] + numbers[end];
            if(cursum == target){
                return {st+1,end+1};
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