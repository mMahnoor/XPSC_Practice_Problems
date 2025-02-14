#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string t)
        {
            for(int i=0,j=t.size()-1; i<j; i++, j--)
            {
                if(t[i]!=t[j]) return false;
            }
            return true;
        }
        void rec_back(int k, vector<string>& sub, string s, vector<vector<string>>& res)
        {
            if(k==s.size())
            {
                res.push_back(sub);
                return;
            }
            for(int i = k; i<s.size(); i++)
            {
                string t = s.substr(k, i-k+1);
                if(isPalindrome(t))
                {
                    sub.push_back(t);
                    rec_back(i+1, sub, s, res);
                    sub.pop_back();
                }
            }
        }
        vector<vector<string>> partition(string s) {
            vector<vector<string>> res;
            vector<string> sub;
            rec_back(0, sub, s, res);
            return res;
        }
    };