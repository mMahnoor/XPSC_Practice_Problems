#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n;
        vector<int> a(n), dl(n), dr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long d=1;
        dl[1] = d;
        for (int i = 1; i < n-1; i++)
        {
            int s = abs(a[i]-a[i+1]);
            if(s==min(s, abs(a[i]-a[i-1]))) d+=1;
            else d += s;
            dl[i+1]=d;
        }
        d=1;
        dr[n-2]=d;
        for (int i = n-2; i > 0; i--)
        {
            int s = abs(a[i-1]-a[i]);
            if(s==min(s, abs(a[i]-a[i+1]))) d+=1;
            else d += s;
            dr[i-1]=d;
        }
        cin >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            if(x>y)
            {
                cout << dr[y-1]-dr[x-1] << "\n";
            }
            else
            {
                cout << dl[y-1]-dl[x-1] << "\n";
            }
        }
    }
    return 0;
}