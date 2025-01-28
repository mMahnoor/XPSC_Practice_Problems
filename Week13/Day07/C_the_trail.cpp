// Problm link: https://codeforces.com/problemset/problem/2055/C
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<long long> > a(n, vector<long long>(m));
        vector<long long> row_sum, col_sum;
        for (int i = 0; i < n; i++)
        {
            long long sum=0;
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j]; 
                sum+=a[i][j];
            }
            row_sum.push_back(sum);
        }
        for (int j = 0; j < m; j++)
        {
            long long sum=0;
            for (int i = 0; i < n; i++)
            {
                sum+=a[i][j];
            }
            col_sum.push_back(sum);
        }
        int j=0, i=0;
        for (int k = 0; k < s.size(); k++)
        {
            if(s[k]=='D')
            {
                a[i][j]=(-1)*row_sum[i];
                col_sum[j]+=a[i][j];
                i++;
            }
            else if(s[k]=='R')
            {
                a[i][j]=(-1)*col_sum[j];
                row_sum[i]+=a[i][j];
                j++;
            }
        }
        a[n-1][m-1]=(-1)*row_sum[n-1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " "; 
            }
            cout << "\n";
        }
    }
    return 0;
}