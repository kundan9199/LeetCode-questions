class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
    //Brute force O(n2)
    //     for(int value : nums){
    //          int frequency =0;
    //         for(int elem : nums){
    //             if(elem == value){
    //                 frequency++;
    //             }
    //         }
    //         if(frequency>(nums.size()/2)){
    //             return value;
    //         }
    //     }
    //     return -1;
    // }


// using sorting O(nlogn)
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int frequency = 1;
//     int ans = nums[0];
//     for(int i =1; i<n; i++){
//         if( nums[i] == nums[i - 1]){
//             frequency++;
//         }
//         else{
//             frequency= 1;
//             ans = nums[i];
//         }
//     }
//     if(frequency > n/2){
//         return ans;
//     }
//   return -1;
//     }


//Moore Algorithm! O(n)
int n = nums.size();
int freq =0; int ans =0;
for(int i =0; i<n; i++){
    if(freq == 0){
        ans = nums[i];
    }
    if(ans == nums[i]){
        freq++;
    }
    else{
        freq--;
    }
}return ans;
    }
    
};