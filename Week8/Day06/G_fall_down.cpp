// Probelm link: https://codeforces.com/problemset/problem/1669/G
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        char grid[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        for (int i = n-2; i >= 0; i--)
        {
            for (int j = 0; j < m; j++)
            {
                if(grid[i][j]=='*' && grid[i+1][j]!='o' && grid[i+1][j]!='*')
                {
                    int k=i+1;
                    while(k<n && grid[k][j]=='.')
                    {
                        k++;
                    }
                    grid[--k][j]='*';
                    grid[i][j]='.';
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}