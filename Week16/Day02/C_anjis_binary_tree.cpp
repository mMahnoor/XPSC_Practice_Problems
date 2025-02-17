#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxN = 3e5+5;
vector<vector<int> > graph(maxN);
vector<int> res(maxN);
string s;
void dfs(int x)
{
    if(graph[x][0]!=0)
    {
        int y = graph[x][0];
        if(s[x-1]!='L')
        {
            res[y] = res[x]+1;
        }
        else res[y] = res[x];
        dfs(y);
    }
    if(graph[x][1]!=0)
    {
        int y = graph[x][1];
        if(s[x-1]!='R')
        {
            res[y] = res[x]+1;
        }
        else res[y] = res[x];
        dfs(y);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, minOp=INT_MAX;
        cin >> n;
        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            graph[i].clear();
            res.clear();
        }
        
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            cin >> l >> r;
            graph[i].push_back(l);
            graph[i].push_back(r);
        }
        dfs(1);
        for (int i = 1; i <= n; i++)
        {
            if(graph[i][0]==0 && graph[i][1]==0)
            {
                minOp = min(minOp, res[i]);
            }
        }
        cout << minOp << "\n";
    }
    return 0;
}