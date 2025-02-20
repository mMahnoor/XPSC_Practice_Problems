#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxN = 1005;
vector<vector<int> > a(maxN, vector<int>(maxN)), vis(maxN, vector<int>(maxN));
vector<pair<int, int> > d;

int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
long long dfs(int si, int sj)
{
    long long sum = a[si][sj];
    vis[si][sj] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj]!=0)
        {
            sum+=dfs(ci, cj);
        }
    }
    return sum;
}
int main()
{
    d.push_back(make_pair(0, 1));
    d.push_back(make_pair(0, -1));
    d.push_back(make_pair(-1, 0));
    d.push_back(make_pair(1, 0));

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                vis[i][j]=0;
            }
        }
        long long maxS = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a[i][j]!=0 && !vis[i][j])
                {
                    maxS = max(maxS, dfs(i, j));
                }
            }
        }
        cout << maxS << "\n";
    }
    return 0;
}