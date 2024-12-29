#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0, cnt=0;
    long long sum=0;
    while(j<n)
    {
        sum+=a[j];
        while(sum>x && i<=j)
        {
            sum-=a[i];
            i++;
        }
        if(sum==x)
        {
            cnt++;
            sum-=a[i];
            i++;
        }
        j++;
    }
    cout << cnt << "\n";
    return 0;
}