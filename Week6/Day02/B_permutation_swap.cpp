#include <iostream>
#include <cstdlib>
using namespace std;

int max_k(int x, int y) {
    if (x == 0) return y;
    if (y == 0) return x;

    if (x < y) return max_k(x, y-x);

    if (x > y) return max_k(x-y, y);
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k=0;
        for (int i = 0; i < n-1; i++)
        {
            int dist1 = abs(a[i]-(i+1));
            int dist2 = abs(a[i+1]-(i+2));
            k=max_k(k, max_k(abs(a[i]-(i+1)),abs(a[i+1]-(i+2))));
        }
        cout << k << "\n";
        
    }
    return 0;
}