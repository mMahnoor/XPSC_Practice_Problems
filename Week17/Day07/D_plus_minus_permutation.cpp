// Problem link: https://codeforces.com/problemset/problem/1872/D
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x , y;
        cin >> n >> x >> y;
        long long numX = n/x, numY=n/y, lcm = (x*y)/__gcd(x,y);
        numX -= (n/lcm);
        numY -= (n/lcm);
        long long maxX, minY;
        maxX = ((n*(n+1))/2)-(((n-numX)*(n-numX+1))/2);
        minY = (numY*(numY+1))/2;
        cout << maxX-minY << "\n";
    }
    return 0;
}