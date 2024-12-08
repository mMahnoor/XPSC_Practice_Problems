#include <iostream>
#include <string>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;
        int id_one=-1, flag=1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1') id_one=i;
            if(s[i]!=t[i])
            {
                if(s[i]=='0' && id_one==-1)
                {
                    flag=0;
                    break;
                }
            }

        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}