#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > graph(n+1);
    vector<int> bad_child(n+1), bad(n+1), res;
    int root=-1;
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        if(p==-1)
        {
            root = i;
        }
        else
        {
            graph[p].push_back(i);
        }
        if(c==1)
        {
            bad_child[p]++;
            bad[i] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(bad[i] && bad_child[i]==graph[i].size())
        {
            res.push_back(i);
        }
    }
    if(!res.empty())
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}