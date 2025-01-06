#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long sumA=0, sumB=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]>1) sumB+=1;
            else sumB+=2;
            sumA+=a[i];
        }
        if(sumB<=sumA && n>1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}