#include <iostream>
#include <vector>
using namespace std;

const int maxN = 1e5+5, inf=1e9+5;
vector<long long> a(maxN);
struct node {
    int minV, cnt;
};
node tree[4*maxN];
node merge(node l, node r)
{
    node x;
    x.minV = min(l.minV, r.minV);
    x.cnt=0;
    if(l.minV==x.minV) x.cnt+=l.cnt;
    if(r.minV==x.minV) x.cnt+=r.cnt;
    return x;
}

void build(int d, int s, int e)
{
    if(s==e)
    {
        tree[d].minV = a[s];
        tree[d].cnt = 1;
        return;
    }
    int mid = (s+e)/2, l = 2*d, r=(2*d)+1;
    build(l, s, mid);
    build(r, mid+1, e);
    tree[d] = merge(tree[l], tree[r]);
}
void update(int d, int s, int e, int i, int v) 
{
    if(i<s || i>e) 
    {
       return;
    }
    if(s==e) 
    {
       tree[d].minV = v;
       tree[d].cnt = 1;
       return;
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    update(l, s, mid, i, v);
    update(r, mid + 1, e, i, v);
    tree[d] = merge(tree[l], tree[r]);
}
node query(int d, int s, int e, int i, int j) 
{
    if(e<i || j<s) 
    {
        node x;
        x.minV=inf;
        x.cnt=1;
        return x;
    }
    if(s>=i && e<=j) 
    {
       return tree[d];
    }
    int mid = (s+e)/2, l = 2*d, r = (2*d)+1;
    return merge(query(l, s, mid, i, j), query(r, mid+1, e, i, j));
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
            node ans = query(1, 1, n, ++l, r);
            cout << ans.minV << " " << ans.cnt << '\n';
        }
    }
    return 0;
}