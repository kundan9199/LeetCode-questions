class Solution {
private: 
    void backtrack(vector<int> &candidates, vector<int> &current,
                   vector<vector<int>> &finalresult, int target, int ind)
    {
        if (target == 0) {
            finalresult.push_back(current);
            return;
        }
        if (target < 0) return;
        for (int i = ind; i < (int)candidates.size(); i++) {
            current.push_back(candidates[i]);
            backtrack(candidates, current, finalresult, target - candidates[i], i);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalresult;
        vector<int> current;
        backtrack(candidates, current, finalresult, target, 0);
        return finalresult;
    }
};