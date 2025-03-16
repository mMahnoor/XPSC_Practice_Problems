#include <iostream>
#include <vector>
using namespace std;

int maxN = 1e5+9;
vector<long long> a(maxN), tree(4*maxN), lazy(4*maxN);

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
    tree[d] = tree[l] + tree[r];
}
void prop(int d, int s, int e)
{
    if(lazy[d]==0) return;
    tree[d] += 1LL*(e-s+1)*lazy[d];
    if(s!=e)
    {
        lazy[2*d] += lazy[d];
        lazy[(2*d)+1] += lazy[d];
    }
    lazy[d]=0;
}
void update(int d, int s, int e, int i, int j, int v) 
{
    prop(d, s, e);
    if(j<s || i>e) 
    {
       return;
    }
    if(i<=s && j>=e) 
    {
       lazy[d] = v;
       prop(d, s, e);
       return;
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    update(l, s, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    tree[d] = tree[l] + tree[r];
}
long long query(int d, int s, int e, int i, int j) {
    prop(d, s, e);
    if(e<i || j<s) 
    {
       return 0;
    }
    if(s>=i && e<=j) 
    {
       return tree[d];
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    return query(l, s, mid, i, j) + query(r, mid+1, e, i, j);
}

int main()
{
    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    while(m--)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l;
            cin >> l;
            l++;
            cout << query(1, 1, n, l, l) << "\n";
        }
    }
    
    return 0;
}