#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long maxC=0, divC, cnt_divA, cnt_divB, cntC;
    cnt_divA=n/a;
    cnt_divB=n/b;
    divC=(a/__gcd(a,b))*b;
    cntC=n/divC;
    if(cntC)
    {
        if(p>q)
        {
            maxC+=(cnt_divA*p)+((cnt_divB-cntC)*q);
        }
        else maxC+=(cnt_divB*q)+((cnt_divA-cntC)*p);
    }
    else
    {
        maxC+=(cnt_divA*p)+(cnt_divB*q);
    }
    cout << maxC << "\n";
    return 0;
}
