#include <iostream>
#include <vector>
using namespace std;

int maxN = 2e5+5;
vector<vector<int> > graph(maxN);
vector<int> vis(maxN), cats(maxN);
long long res = 0;
int n, m;

void dfs(int x, int cnt)
{
    if(cats[x]) cnt++;
    else cnt=0;
    if(cnt>m) return;
    vis[x]=1;
    if(x != 1 && graph[x].size()==1) res++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(!vis[graph[x][i]])
        {
            dfs(graph[x][i], cnt);            
        }
    }    
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i < n+1; i++)
    {
        graph[i].clear();
        vis[i]=0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);           
    }
    dfs(1, 0);
    cout << res << "\n";
    return 0;
}