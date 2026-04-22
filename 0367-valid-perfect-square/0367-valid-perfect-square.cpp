class Solution {
public:
    bool isPerfectSquare(int num) {
          if (num < 0) return false; 
    
    long long root = static_cast<long long>(sqrt(num));
    
    return (root * root == num);
    }
};