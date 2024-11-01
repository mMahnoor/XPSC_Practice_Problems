#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        string b, s;
        cin >> n;
        cin >> b;

        vector<char> c;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp.insert(make_pair(b[i],-1));
        }
        for (unordered_map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        {
            c.push_back((*it).first);
        }
        sort(c.begin(), c.end());
        for (int i = 0; i < c.size(); i++)
        {
            mp[c[i]]=i;
        }
        int sz = c.size()-1;
        for (int i = 0; i < n; i++)
        {
            s += c[sz-mp[b[i]]];
        }
        cout << s << "\n";
              
    }
        
    return 0;
}