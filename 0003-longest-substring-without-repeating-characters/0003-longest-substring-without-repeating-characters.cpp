class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> lastSeen(256, -1);
    int lft = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        if (lastSeen[s[right]] >= lft) {
            lft = lastSeen[s[right]] + 1;
        }

        lastSeen[s[right]] = right;
        maxLength = max(maxLength, right - lft + 1);
    }

    return maxLength;
}
};