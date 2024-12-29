#include <iostream>
#include <string>
#include <map>
#include <deque>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int cnt_odds=0;
    map<char, int>::iterator it;
    for (it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second%2!=0) cnt_odds++;
    }
    deque<char> res;
    if(s.size()%2==0) 
    {
        if(cnt_odds)
            cout << "NO SOLUTION\n";
        else
        {
            for (it=mp.begin(); it!=mp.end(); it++)
            {
                int p=it->second/2;
                while(p--) 
                {
                    res.push_front(it->first);
                    res.push_back(it->first);
                }

            }
            for (char i : res) {
                cout << i;
            }
            cout << "\n";
        }
    }
    else
    {
        if(cnt_odds==1)
        {
            char c;
            for (it=mp.begin(); it!=mp.end(); it++)
            {
                if(it->second%2!=0) c=it->first;
                int p=it->second/2;
                while(p--) 
                {
                    res.push_front(it->first);
                    res.push_back(it->first);
                }

            }
            res.insert(res.begin()+(res.size()/2), c);
            for (char i : res) {
                cout << i;
            }
            cout << "\n";
        }
        else cout << "NO SOLUTION\n";
    }
    return 0;
}