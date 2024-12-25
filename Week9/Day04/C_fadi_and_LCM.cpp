#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X, a, b;
    cin >> X;
    for (long long i = sqrt(X); i>= 1; i--)
    {
        if(X%i==0)
        {
            if((i/__gcd(i,X/i))*(X/i)==X)
            {
                a=i;
                b=X/i;
                break;
            }
        }
    }
    cout << a << " " << b << "\n";
    return 0;
}