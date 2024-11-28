// Problem link: https://codeforces.com/problemset/problem/2003/C

#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        string res;
        priority_queue<pair<int, char> > pq;
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            pq.push(make_pair(it->second, it->first));
        }
        while (!pq.empty())
        {
            if(pq.size()<2) break;
            pair<int, char> p1=pq.top();
            pq.pop();
            pair<int, char> p2=pq.top();
            pq.pop();
            res+=p1.second;
            p1.first--;
            res+=p2.second;
            p2.first--;
            if(p1.first>0) pq.push(p1);
            if(p2.first>0) pq.push(p2);

        }
        if(!pq.empty())
        {
            int k=pq.top().first;
            while(k>0)
            {
                res+=pq.top().second;
                k--;
            }
        }
        cout << res << "\n";
    }
    return 0;
}