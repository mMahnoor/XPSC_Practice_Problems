#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int p1=0, p2=0, val=a[p1];
    long long total=0, c1=0, c2=0;
    
    while(p1<n && p2<m)
    {
        c1=0;
        c2=0;
        val=a[p1];            
        while (p2<m && b[p2]<val) p2++;
        while(p1<n && a[p1]==val)
        {
            c1++;
            p1++;
        }
        while(p2<m && b[p2]==val)
        {
            c2++;
            p2++;
        }
        
        total+=(c1*c2);

    }
    cout << total << "\n";
    return 0;
}