// Problem link: https://codeforces.com/problemset/problem/1729/C
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cstdlib>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    map<char, int> mp = {{'a', 1},{'b', 2},{'c', 3},{'d', 4},{'e', 5},{'f', 6},{'g', 7},{'h', 8},{'i', 9},{'j', 10},{'k', 11},{'l', 12},{'m', 13},{'n', 14},{'o', 15},{'p', 16},{'q', 17},{'r', 18},{'s', 19},{'t', 20},{'u', 21},{'v', 22},{'w', 23},{'x', 24},{'y', 25},{'z', 26}};
    while(t--)
    {
        string s;
        cin >> s;

        set<pair<char, int>> seq;
        char first=s[0];
        char last=s[s.size()-1];
        int min_range=min(mp[first], mp[last]);
        int max_range=max(mp[first], mp[last]);
        
        for (int i = 1; i < s.size()-1; i++)
        {
            if(mp[s[i]]>=min_range && mp[s[i]]<=max_range)
            {
                seq.insert(make_pair(s[i],i+1));
            }
        }
        int min_cost=0;
        set<pair<char, int> >::iterator it1, it2;
        set<pair<char, int> >::reverse_iterator rit1, rit2;
        if(mp[first]<=mp[last] && !seq.empty())
        {
            it1=seq.begin();
            min_cost+=(mp[(*seq.begin()).first]-mp[first]);
            for (it2 = ++seq.begin(); it2 != seq.end(); it2++)
            {
                min_cost+=(mp[(*it2).first]-mp[(*it1).first]);
                it1=it2;
            }
            min_cost+=(mp[last]-mp[(*it1).first]);
            cout << min_cost << " " << seq.size()+2 << "\n";
            cout << 1 << " ";
            for (it1 = seq.begin(); it1 != seq.end(); it1++)
            {
                cout << (*it1).second << " ";
            }
            cout << s.size();
        }
        else if(mp[first]>mp[last] && !seq.empty())
        {
            rit1 = seq.rbegin();
            min_cost+=(mp[first]-mp[(*seq.rbegin()).first]);
            for (rit2=++seq.rbegin(); rit2 != seq.rend(); rit2++)
            {
                min_cost+=(mp[(*rit1).first]-mp[(*rit2).first]);
                rit1=rit2;
            }
            min_cost+=(mp[(*rit1).first]-mp[last]);
            cout << min_cost << " " << seq.size()+2 << "\n";
            cout << 1 << " ";
            for (rit1 = seq.rbegin(); rit1 != seq.rend(); rit1++)
            {
                cout << (*rit1).second << " ";
            }
            cout << s.size();
        }
        else
        {
            cout << abs(mp[first]-mp[last]) << " " << 2 << "\n";
            cout << 1 << " ";
            cout << s.size();
        }
        cout << "\n";
    }
    return 0;
}