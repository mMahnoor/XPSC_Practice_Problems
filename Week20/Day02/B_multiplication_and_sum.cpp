#include <iostream>
#include <vector>
using namespace std;

int maxN = 1e5+9, MOD=1e9+7;
vector<long long> a(maxN, 1), tree(4*maxN), lazy(4*maxN);

void build(int d, int s, int e)
{
    lazy[d]=1;
    if(s==e)
    {
        tree[d] = a[s];
        return;
    }
    int mid = (s+e)/2, l = 2*d, r = l+1;
    build(l, s, mid);
    build(r, mid+1, e);
    tree[d] = (tree[l]+tree[r])%MOD;
}
void prop(int d, int s, int e)
{
    if(lazy[d]==1) return;
    tree[d] = (1LL*tree[d]*lazy[d]) % MOD;
    if(s!=e)
    {
        int l=2*d, r=l+1;
        lazy[l] = (1LL*lazy[l]*lazy[d]) % MOD;
        lazy[r] = (1LL*lazy[r]*lazy[d]) % MOD;
    }
    lazy[d]=1;
}
void update(int d, int s, int e, int i, int j, int v)
{
    prop(d, s, e);
    if(j<s || i>e) return;
    if(i<=s && j>=e)
    {
        lazy[d] = v;
        prop(d, s, e);
        return;
    }
    int mid = (s+e)/2, l = 2*d, r = l+1;
    update(l, s, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    tree[d] = (tree[l]+tree[r])%MOD;
}
long long query(int d, int s, int e, int i, int j)
{
    prop(d, s, e);
    if(j<s || i>e) return 0;
    if(i<=s && j>=e)
    {
        return tree[d];
    }
    int mid = (s+e)/2, l = 2*d, r = l+1;
    return (query(l, s, mid, i, j)+query(r, mid+1, e, i, j))%MOD;
}
int main()
{
    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    while(m--)
    {
        int x, l, r;
        cin >> x;
        if(x==1)
        {
            int v;
            cin >> l >> r >> v;
            update(1, 1, n, ++l, r, v);
        }
        else{
            cin >> l >> r;
            cout << query(1, 1, n, ++l, r) << "\n";
        }
    }
    return 0;
}