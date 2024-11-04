#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int max_days=0;
    int k=1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=k)
        {
            max_days++;
            k++;
        }
    }
    cout << max_days << "\n";
    return 0;
}