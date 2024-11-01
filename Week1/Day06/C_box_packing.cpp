#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    map<int, int> :: iterator it;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        if(!mp.empty()) it=mp.find(val);
        if(it!=mp.end())
        {
            mp[val]++;
        }
        else mp.insert(make_pair(val, 1));
    }
    int c=0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        int p=c;
        c=abs(it->second-c);
        if(p>it->second)
        {
            mp[it->first] = it->second+c;
        }
        c=mp[it->first];
    }
    it=prev(mp.end());
    cout << it->second << endl;
    
    return 0;
}