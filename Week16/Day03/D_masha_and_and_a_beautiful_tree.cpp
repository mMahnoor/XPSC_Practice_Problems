#include <iostream>
#include <vector>
using namespace std;

int maxM = 300000;
vector<int> p(maxM);
int res = 0;
void recursion(int ls_l, int rs_l, int ls_r, int rs_r)
{
    int maxV=0, minV=INT_MAX;
    for (int i = ls_l; i <= rs_l; i++)
    {
        maxV = max(maxV, p[i]);
    }
    for (int i = ls_r; i <= rs_r; i++)
    {
        minV = min(minV, p[i]);
    }
    if(maxV>minV)
    {
        for (int i = ls_l, j=ls_r; i <= rs_l; i++, j++)
        {
            int tmp = p[i];
            p[i] = p[j];
            p[j] = tmp;
        }
        res+=1;        
    }
    if(ls_l==rs_l) return;
    int mid_l = (ls_l+rs_l)/2, mid_r = (ls_r+rs_r)/2;
    recursion(ls_l, mid_l, mid_l+1, rs_l);
    recursion(ls_r, mid_r, mid_r+1, rs_r);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, flag=1;
        cin >> m;
        res=0;
        for (int i = 1; i <= m; i++)
        {
            cin >> p[i];
        }
        for (int i = 2; i <= m; i++)
        {
            if(p[i-1]>p[i])
            {
                flag=0;
                break;
            }
        } 
        if(flag)
        {
            cout << "0\n";
            continue;
        } 
        flag=1;      
        recursion(1, m/2, (m/2)+1, m);
        for (int i = 1; i <= m; i++)
        {
            // cout << p[i] << " ";
            if(p[i-1]>p[i])
            {
                flag=0;
                break;
            }
        }
        // cout << "\n";
        if(flag) cout << res << "\n";
        else cout << "-1\n";
    }
    return 0;
}