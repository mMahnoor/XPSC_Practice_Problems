#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], flag=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (1<<n); i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if((i>>j)&1)
            {
                sum+=a[j];
            }
            else{
                sum-=a[j];
            }
        }
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}