class Solution {
public:
    bool hasAlternatingBits(int n) {
        long shift =n^(n>>1);
        if((shift & (shift + 1)) == 0){
            return true;
        }
        else{
            return false;
        }
    }
};