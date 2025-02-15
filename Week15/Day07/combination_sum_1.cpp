class Solution {
    public:
        void recursion(vector<int>& candidates, int i, vector<int>& sub, int target, set<vector<int>>& res)
        {
            if(i==candidates.size()) return;
            if(target<0) return;
            if(target==0)
            {
                res.insert(sub);
                return;
            }
            sub.push_back(candidates[i]);
            recursion(candidates, i, sub, target-candidates[i], res);
            recursion(candidates, i+1, sub, target-candidates[i], res);
            sub.pop_back();
            recursion(candidates, i+1, sub, target, res);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            set<vector<int>> res;
            vector<vector<int>> v;
            vector<int> sub;
            recursion(candidates, 0, sub, target, res);
            for(auto it=res.begin(); it!=res.end(); it++)
            {
                v.push_back(*it);
            }
            return v;
        }
    };