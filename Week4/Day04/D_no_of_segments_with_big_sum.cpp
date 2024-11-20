#include <iostream>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0;
    long long segments=0;
    long long sum=0;
    while(j<n)
    {
        sum+=a[j];
        
        while(sum>=s)
        {
            segments+=(n-j);
            sum-=a[i];
            i++;
        }
                
        j++;
    }
    cout << segments << "\n";
    return 0;
}