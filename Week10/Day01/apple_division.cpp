#include <iostream>
#include <vector>
#include <climits>
using namespace std;

long long minS=LONG_MAX;
void min_sum(int i, long long s1, long long s2, vector<int> a)
{
    if(i==a.size())
    {
        minS = min(minS, abs(s1-s2));
        return;
    }
    min_sum(i+1, s1+a[i], s2, a);
    min_sum(i+1, s1, s2+a[i], a);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min_sum(0, 0, 0, a);
    cout << minS << "\n";
    return 0;
}