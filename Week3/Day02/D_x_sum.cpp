#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n][m];
        map<int, int> d1, d2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                d1[i-j]+=a[i][j];
                d2[i+j]+=a[i][j];
            }
        }
        int max_sum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = d1[i-j]+d2[i+j]-a[i][j];
                max_sum = max(sum, max_sum);
            }
        }
        cout << max_sum << "\n";
    }
    return 0;
}