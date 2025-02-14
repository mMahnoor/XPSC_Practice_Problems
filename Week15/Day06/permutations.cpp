#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void swap(int a, int b, vector<int>& nums)
    {
        int tmp = nums[a];
        nums[a] = nums[b];
        nums[b] = tmp;
    }
    void recursion(vector<int>& nums, int k, vector<vector<int>>& res)
    {
        if(k==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i=k; i<nums.size(); i++)
        {
            swap(i, k, nums);
            recursion(nums, k+1, res);
            swap(i, k, nums);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> res;
        recursion(nums, 0, res);
        return res;
    }
};