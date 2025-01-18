#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, maxC=1;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j <=s [i]; j++) {
            if(s[i]%j==0)
            {
                mp[j]++;
                while(s[i]%j==0)
                {
                    s[i] /= j;
                }
            }
        }
        if(s[i]>1)
        {
            mp[s[i]]++;
        }
    }
    map<int, int>::iterator it=mp.begin();
    while(it!=mp.end())
    {
        maxC=max(maxC, it->second);
        it++;
    }
    cout << maxC << "\n";  
    return 0;
}