class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squarenum;
        for (int x : nums) {
            x = x*x;
            squarenum.push_back(x);
        }
        sort(squarenum.begin(), squarenum.end());
        return squarenum;
    }
};