#include <iostream>
#include <vector>
using namespace std;

int maxN = 1e5+5;
vector<long long> a(maxN), tree(4*maxN);

void build(int d, int s, int e)
{
    if(s==e)
    {
        tree[d] = a[s];
        return;
    }
    int mid = (s+e)/2, l = 2*d, r=(2*d)+1;
    build(l, s, mid);
    build(r, mid+1, e);
    tree[d] = min(tree[l], tree[r]);
}
void update(int d, int s, int e, int i, int v) 
{
    if(i<s || i>e) 
    {
       return;
    }
    if(s==e) 
    {
       tree[d] = v;
       return;
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    update(l, s, mid, i, v);
    update(r, mid + 1, e, i, v);
    tree[d] = min(tree[l], tree[r]);
}
long long query(int d, int s, int e, int i, int j) {
    if(e<i || j<s) 
    {
       return 1e18;
    }
    if(s>=i && e<=j) 
    {
       return tree[d];
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    return min(query(l, s, mid, i, j), query(r, mid+1, e, i, j));
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--) {
        int x;
        cin >> x;
        if(x==1) 
        {
            int id, val;
            cin >> id >> val;
            update(1, 1, n, ++id, val);
        }
        else 
        {
            int l, r;
            cin >> l >> r;
            long long ans = query(1, 1, n, ++l, r);
            cout << ans << '\n';
        }
    }
    return 0;
}