// Problem link: https://leetcode.com/problems/subsets-ii/description/
class Solution {
    public:
        void recursion(vector<int>& nums, int i, vector<int>&sub, vector<vector<int>>& res)
        {
            if(i==nums.size())
            {
                res.push_back(sub);
                return;
            }
            sub.push_back(nums[i]);
            recursion(nums, i+1, sub, res);
            sub.pop_back();
            while(i+1<nums.size() && nums[i]==nums[i+1])
            {
                i++;
            }
            recursion(nums, i+1, sub, res);
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<vector<int> > res;
            vector<int> sub;
            sort(nums.begin(), nums.end());
            recursion(nums, 0, sub, res);
    
            return res;
        }
};