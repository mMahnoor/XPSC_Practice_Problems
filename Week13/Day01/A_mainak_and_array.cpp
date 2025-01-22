#include <iostream>
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
        int maxV=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i>0) maxV=max(maxV, a[i-1]-a[i]);
        } 
        for (int i = 1; i < n; i++)
        {
            maxV=max(maxV, a[i]-a[0]);
        }    
        for (int i = 0; i < n-1; i++)
        {
            maxV=max(maxV, a[n-1]-a[i]);
        }        
        cout << maxV << "\n";
    }
    return 0;
}