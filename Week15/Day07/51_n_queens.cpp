// Problem link: https://leetcode.com/problems/n-queens/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool is_valid(int row, int col, int n, vector<string>& sub)
        {
            for(int i=row, j=0; j<n; j++)
            {
                if(sub[i][j]=='Q') return false;
            }
            for(int i=0, j=col; i<n; i++)
            {
                if(sub[i][j]=='Q') return false;
            }
            for(int i=row, j=col; j<n && i>=0; i--, j++)
            {
                if(sub[i][j]=='Q') return false;
            }
            for(int i=row, j=col; j>=0 && i>=0; i--, j--)
            {
                if(sub[i][j]=='Q') return false;
            }
            return true;
        }
        void recursion(int i, int n, vector<string>& sub, vector<vector<string>>& res)
        {
            if(i==n)
            {
                res.push_back(sub);
                return;
            }
            for(int j=0; j<n; j++)
            {
                if(is_valid(i, j, n, sub)) 
                {
                    sub[i][j] = 'Q';
                    recursion(i+1, n, sub, res);
                    sub[i][j] = '.';
                }
            }
        }
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> res;
            vector<string> sub(n, string(n, '.'));
            recursion(0, n, sub, res);
    
            return res;
        }
};