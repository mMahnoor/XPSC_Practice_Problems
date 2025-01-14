// Problem link: https://codeforces.com/problemset/problem/1304/B
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool ispalindrome(string s)
{
    for (int i = 0, j=s.size()-1; i < s.size(); i++, j--)
    {
        if(i>=j) break;
        if(s[i]!=s[j]) return false;
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, string> mp;
    map<string, int> rev;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(ispalindrome(s))
        {
            mp[s.size()]=s;
        }
        else 
        {
            v.push_back(s);
            rev[s]=s.size();
        }
    }
    string res1, res2;
    for (int i = 0; i < v.size(); i++)
    {
        string tmp=v[i];
        rev[v[i]]=0;
        reverse(v[i].begin(), v[i].end());
        if(rev[v[i]])
        {
            res1+=tmp;
            res2=v[i]+res2;
        }
    }
    if(res1.size() && res2.size())
    {
        if(mp.size() && mp.rbegin()->second.size()) res1+=mp.begin()->second;
        res1+=res2;
    } 
    else if(mp.size() && mp.rbegin()->second.size()) 
    {
        res1+=mp.rbegin()->second;
    }

    if(res1.size()) cout << res1.size() << "\n" << res1 << "\n";
    else cout << "0\n";
    return 0;
}