#include <iostream>
#include <vector>
#include <map>
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
        cin >> n;
        vector<string> v(n);
        char chars[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        long long cnt=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                string c;
                if(v[i][1]!=chars[j])
                {
                    c += v[i][0];
                    c += chars[j];
                    if(mp[c]>0)
                    {
                        cnt+=mp[c];
                    }
                }
            }
            for (int j = 0; j < 11; j++)
            {
                string c;
                if(v[i][0]!=chars[j])
                {
                    c += chars[j];
                    c += v[i][1];
                    if(mp[c]>0)
                    {
                        cnt+=mp[c];
                    }
                }
            }
        }
        cout << cnt/2 << "\n";
    }
    return 0;
}