#include <iostream>
#include <vector>
#include <map>
using namespace std;

int maxN = 1e5+5;
int n;
vector<vector<int> > graph(maxN);
vector<pair<int, int> > edges;
vector<int> vis(maxN);
map<pair<int, int>, int> mp;

void dfs(int x, int w)
{
    vis[x]=1;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(!vis[graph[x][i]])
        {
            int wt;
            if(w==3) wt=2;
            else wt=3;
            pair<int, int> p = make_pair(min(x, graph[x][i]), max(x, graph[x][i]));
            mp[p]=wt;
            w=wt;
            dfs(graph[x][i], w);
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
        cin >> n;
        int flag=0;
        for (int i = 1; i <= n; i++)
        {
            graph[i].clear();
            vis[i]=0;
        }
        mp.clear();
        edges.clear();
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            if(graph[u].size()>2 || graph[v].size()>2) flag=1;
            edges.push_back(make_pair(min(u,v), max(u,v)));
        }
        if(flag) cout << "-1\n";
        else
        {
            dfs(1, 2);
            for (int i = 0; i < edges.size(); i++)
            {
                cout << mp[edges[i]] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}