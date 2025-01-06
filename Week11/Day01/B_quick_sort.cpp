#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int p=1, unsorted=0;
        for (int i = 0; i < n; i++)
        {
            if(p!=a[i]) unsorted++;
            else p++;
        }
        cout << ceil(unsorted/(k*1.0)) << "\n";
    }
    return 0;
}