#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<vector<int> > res(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        int m=i, k=i;
        for (int j = 0; j < p[i]; j++)
        {
            res[m][k]=p[i];
            if(k>0 && !res[m][k-1]) k--;
            else if(m<n-1 && !res[m+1][k]) m++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
