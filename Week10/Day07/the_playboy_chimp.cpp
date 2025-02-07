// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int h, x=-1, y=-1;
        cin >> h;
        vector<int>::iterator low = lower_bound(a.begin(), a.end(), h);
        vector<int>::iterator up = upper_bound(a.begin(), a.end(), h);
        if(low==a.end())
        {
            x=a.back();
        }
        else
        {
            if(low!=a.begin()) x=*--low;
            else x=-1;
            if(up!=a.end()) y=*up;        
        }
        if(x!=-1) cout << x << " ";
        else cout << "X ";
        if(y!=-1) cout << y << "\n";
        else cout << "X\n";
    }
    return 0;
}