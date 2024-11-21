// Problem link: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0, j=0;
        int max_segment=0;
        map<int, int> mp;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()==k)
            {
                max_segment=max(max_segment, j-i+1);
            }
            else
            {
                while(mp.size()>k)
                {                
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                if(mp.size()==k) max_segment=max(max_segment, j-i+1);
            }
            j++;
        }
        if(max_segment) return max_segment;
        else return -1;
    }
};