#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[m+1];
    for (int i = 0; i < m+1; i++)
    {
        cin >> a[i];
    }
    int max_cnt=0;
    for (int i = 0; i < m; i++)
    {
        int XOR=a[m];
        XOR ^= a[i];
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if((XOR>>j)&1) cnt++;
        }
        if(cnt<=k) max_cnt++;
        cnt=0;
    }
    cout << max_cnt << "\n";
    return 0;
}