#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int XOR=0, cnt=0, flag=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        if(XOR==0)
        {
            flag=1;
        }
        else
        {
            int tmp=0;
            for (int i = 0; i < n; i++)
            {
                tmp ^= a[i];
                if(tmp==XOR)
                {
                    tmp^=tmp;
                    cnt++;
                }
            }
            if(cnt>2) flag=1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}