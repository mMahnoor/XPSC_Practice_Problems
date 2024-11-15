// Problem link: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    int i=0, j=0, cnt=0;
	    unordered_map<char, int> mp1, mp2;
	    for (int i = 0; i < pat.size(); i++)
		{
			mp1[pat[i]]++;
		}
		
	    while(j<txt.size())
	    {
	        
	        mp2[txt[j]]++;
	        
	        if(j-i+1==pat.size())
	        {
				int flag=1;
	            for (auto it=mp1.begin(); it!=mp1.end(); it++)
				{
					if(mp2[it->first]!=it->second) flag=0;
				}
				if(flag) cnt++;
				mp2[txt[i]]--;
	            i++;
	        }
	        j++;
	    }
	    return cnt;
	}

};

int main()
{
    Solution s;
    cout << s.search("aaba", "aabaabaa") << "\n";

    return 0;
}