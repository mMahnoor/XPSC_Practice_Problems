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
        
        int gcd=1;
        if(n%2!=0)
        {
            n--;
            gcd=n/2;
        }
        else
        {
            gcd=n/2;
        }
        cout << gcd << "\n";
    }
    return 0;
}