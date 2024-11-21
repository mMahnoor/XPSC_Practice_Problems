// Problem link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        map<int, int> mp;
        int i=0;
        int max_segment=0;
        long long sum=0;
        while(i<arr.size())
        {
            sum+=arr[i];
            if(mp.find(sum)==mp.end()) mp[sum]=i;
            if(sum==k)
            {
                max_segment=max(max_segment, i+1);
            }
            if(mp.find(sum-k)!=mp.end())
            {
                max_segment=max(max_segment, i-mp[sum-k]);
            }
            i++;
        }
        return max_segment;
    }
};

// Input
// arr: 832 607 -965 375 -426 -918 -103 379 -903 678 -661 -855 -267 -528 919 832 607 -965 375 -426 -918 -103 379 -903 678 -661 -855 -267 -528 919
// k: -918