#include <iostream>
#include <vector>
using namespace std;

int maxN = 1e5+5;
int n;
vector<vector<int> > graph(maxN);
int res=0;

int dfs(int x, int p)
{
    int tree_size = 1;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(graph[x][i]!=p)
        {
            int children = dfs(graph[x][i], x);
            if(children%2==0)
            {
                res+=1;
            }
            else tree_size+=children;
        }
    }
    return tree_size;
}
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    if(n%2!=0) cout << "-1\n";
    else
    {
        dfs(1, -1);
        cout << res << "\n";
    }
    return 0;
}