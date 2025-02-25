#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, flag=0;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        if(c[0]==c[n-1])
        {
            if(k<=2) flag=1;
            else 
            {
                int v=2;
                for (int i = 1; i < n-1; i++)
                {
                    if(c[i]==c[0]) v++;
                    if(v>=k)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        else
        {
            int v1 = 1, v2 = 1, id1=0;
            for (int i = 1; i < n; i++)
            {
                if(v1==k) 
                {
                    id1=i-1;
                    break;
                }
                if(c[i]==c[0]) v1++;
            }
            for (int i = n-2; i >= 0; i--)
            {
                if(i<=id1 || v2==k) 
                {
                    break;
                }
                if(c[i]==c[n-1]) v2++;
            }
            if(v1>=k && v2>=k) flag=1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}