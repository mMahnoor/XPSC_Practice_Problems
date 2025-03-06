#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(n<=2) 
        {
            cout << "-1\n";
            continue;
        }
        sort(a.begin(), a.end());
        int id=(n/2)+1;
        double avg = sum/(2.0*n);
        if(avg>a[id-1]) cout << "0\n";
        else
        {
            cout << (a[id-1]*2LL)*n-sum+1 << "\n";
        } 
        
    }
    return 0;
}