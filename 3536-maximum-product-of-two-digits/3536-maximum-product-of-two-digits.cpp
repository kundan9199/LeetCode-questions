class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        n = abs(n);
    while (n > 0) {
        int last_digit = n % 10;   // 1. Get the last digit
        digits.push_back(last_digit); // 2. Store it
        n = n / 10;              // 3. Remove the last digit
    }
    int size = digits.size();
    sort(digits.begin(), digits.end());
    return digits[size-1]* digits[size-2];
    }
};