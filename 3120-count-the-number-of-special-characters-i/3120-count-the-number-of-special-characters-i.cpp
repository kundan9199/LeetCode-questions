class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> chars(word.begin(), word.end());
        int count = 0;
        for (char ch : chars) {
            if (ch >= 'a' && ch <= 'z' && chars.count(toupper(ch))) {
                count++;
                
            }
        }
        return count;
    }
};