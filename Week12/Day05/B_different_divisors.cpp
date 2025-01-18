#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long d;
        cin >> d;
        long long p, q;
        long long i=d+1;
        while(1)
        {
            p=0;
            for (long long j = 2; j * j <= i; j++) {
                if(i % j == 0) 
                {
                    p=i;
                }
            }
            if(!p) 
            {
                p=i; 
                break;
            }
            i++;
        }
        i=p+d;
        while(1)
        {
            q=0;
            for (long long j = 2; j * j <= i; j++) {
                if(i % j == 0) 
                {
                    q=i;
                }
            }
            if(!q) 
            {
                q=i; 
                break;
            }
            i++;
        }
        cout << min((p*p*p), (p*q)) << "\n";
    }
    return 0;
}