#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a=0, b, c, d, flag=1;
        cin >> b >> c >> d;
        long long maxV=max(b, max(c,d));
        long long maxB=log2(maxV);
        for (long long i = 0; i <= maxB; i++)
        {
            long long bit_b = ((b>>i)&1);
            long long bit_c = ((c>>i)&1);
            long long bit_d = ((d>>i)&1);
            if((0|bit_b)-(0&bit_c)==bit_d)
            {
                continue;
            }
            else if((1|bit_b)-(1&bit_c)==bit_d)
            {
                a |= (1LL<<i);
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(!flag) cout << "-1\n";
        else cout << a << "\n";
    }
    return 0;
}
