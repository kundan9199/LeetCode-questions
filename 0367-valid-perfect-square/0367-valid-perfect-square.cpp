class Solution {
public:
    //using sqrt()
    //     bool isPerfectSquare(int num) {
    //           if (num < 0) return false;

    //     long long root = static_cast<long long>(sqrt(num));

    //     return (root * root == num);
    //     }
    // };

    //using binary search
    bool isPerfectSquare(int num) {
        if (num < 1)
            return false;
        long left = 1, right = num;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long square = mid * mid;
            if (square == num)
                return true;
            if (square < num)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};
