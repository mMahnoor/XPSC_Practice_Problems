#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ans=-1, maxV=-1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>maxV+1)
        {
            ans=i+1;
            break;
        }
        maxV=max(maxV, a[i]);
    }
    cout << ans << "\n";
    return 0;
}