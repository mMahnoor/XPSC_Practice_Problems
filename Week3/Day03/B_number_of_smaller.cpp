#include <iostream>

using namespace std;

int main()
{
    
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
    int p=0, cnt=0;
    for (int i = 0; i < m; i++)
    {
        if(p<n)
        {
            while(b[i]>a[p]) 
            {
                p++;
                if(p>=n)
                {
                    break;
                }
            }
        }
        b[i]=p;
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
    
    return 0;
}