#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i=log2(n);
        int k=(1<<i);
        k &= ~(1<<i);
        for (int j = i-1; j >= 0; j--)
        {
            k |= (1<<j);
        }        
        cout << k << "\n";        
    }
    return 0;
}