#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int> > graph;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[v].insert(u);
            graph[u].insert(v);
        }
        int leaf, parent, x, y;
        for (int i = 1; i <= n; i++)
        {
            if(graph[i].size()==1)
            {
                leaf=i;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if(graph[i].find(leaf)!=graph[i].end())
            {
                y = graph[i].size()-1;
                parent=i;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if(graph[i].size()>1 && graph[i].find(parent)!=graph[i].end())
            {
                x = graph[i].size();
                break;
            }
        }
        cout << x << " " << y << "\n";
    }   
    return 0;
}