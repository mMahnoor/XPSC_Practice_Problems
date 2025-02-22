#include <iostream>
#include <vector>
using namespace std;

int maxN = 2e5+5;
vector<vector<int> > graph(maxN);
vector<long long> res(maxN);

void dfs(int x, int p)
{
    if(x != 1 && graph[x].size()==1) res[x]++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(graph[x][i]!=p)
        {
            dfs(graph[x][i], x);
            res[x] += res[graph[x][i]];
        }
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
        int n;
        cin >> n;
        for (int i = 1; i < n+1; i++)
        {
            graph[i].clear();
            res[i]=0;
        }
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;

            graph[u].push_back(v);
            graph[v].push_back(u);           
        }
        dfs(1, 1);
        int q;
        cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << 1LL*(res[x]*res[y]) << "\n";
        }
    }
    return 0;
}