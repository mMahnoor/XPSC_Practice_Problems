#include <iostream>
#include <vector>
using namespace std;

int maxN = 4e3+5;
vector<vector<int> > graph(maxN);
vector<int> vis(maxN);
vector<pair<int,int> > cnt(maxN);
int n;
string s;
void dfs(int x)
{
    vis[x]=1;
    int w=0, b=0;
    if(s[x-1]=='W') 
    {
        w++;
    }
    else b++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if(!vis[graph[x][i]])
        {
            dfs(graph[x][i]);  
            w += cnt[graph[x][i]].first; 
            b += cnt[graph[x][i]].second;        
        }
    } 
    cnt[x] = make_pair(w,b);  
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cnt.clear();
        cnt.resize(n+1);
        for (int i = 1; i < n+1; i++)
        {
            graph[i].clear();
            vis[i]=0;
        }
        for (int i = 2; i <= n; i++)
        {
            int u;
            cin >> u;

            graph[u].push_back(i);
            graph[i].push_back(u);           
        }

        cin >> s;
        int w, b;
        if(s[0]=='W') w++;
        else b++;
        dfs(1);
        long long res=0;
        for (int i = 1; i < cnt.size(); i++)
        {
            // cout << cnt[i].first << " | " << cnt[i].second << "\n";
            if(cnt[i].first==cnt[i].second) res++;
        }
        cout << res << "\n";
    }
    return 0;
}