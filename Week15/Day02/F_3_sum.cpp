#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag=0;
        cin >> n;
        vector<int> a(n), digits;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int unit = a[i]%10;
            mp[unit]++;
            if(mp[unit]<=3) digits.push_back(unit);
        }
        for (int i=0; i<digits.size(); i++)
        {
            for (int j=i+1; j<digits.size(); j++)
            {
                for (int k=j+1; k<digits.size(); k++)
                {
                    if((digits[i]+digits[j]+digits[k])%10==3) 
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}