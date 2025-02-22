#include <iostream>
#include <vector>
using namespace std;

int maxN = 1e5+5;
vector<vector<int> > graph(maxN);
vector<int> vis(maxN);
vector<long long> cnt(2);
long long res = 0;
int n;

void dfs(int x, int c)
{
    vis[x]=1;
    cnt[c]++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(!vis[graph[x][i]])
        {
            if(c==1) dfs(graph[x][i], 0);
            else dfs(graph[x][i], 1);           
        }
    }    
}
int main()
{
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        graph[i].clear();
        vis[i]=0;
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);           
    }
    dfs(1, 0);
    long long edges = cnt[0]*cnt[1];
    long long new_edges = edges-(n-1);
    cout << new_edges << "\n";
    return 0;
}