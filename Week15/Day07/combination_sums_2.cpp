// Problem link: https://leetcode.com/problems/combination-sum-ii/
class Solution {
    public:
        void recursion(vector<int>& candidates, int i, vector<int>& sub, int target, vector<vector<int>>& res)
        {
            if(target==0)
            {
                res.push_back(sub);
                return;
            }
            if(target<0) return;
            if(i==candidates.size()) return;
            sub.push_back(candidates[i]);
            recursion(candidates, i+1, sub, target-candidates[i], res);
            sub.pop_back();
            while(i+1<candidates.size() && candidates[i]==candidates[i+1])
            {
                i++;
            }
            recursion(candidates, i+1, sub, target, res);
        }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<vector<int>> res;
            vector<int> sub;
            sort(candidates.begin(), candidates.end());
            recursion(candidates, 0, sub, target, res);
            return res;
        }
    };