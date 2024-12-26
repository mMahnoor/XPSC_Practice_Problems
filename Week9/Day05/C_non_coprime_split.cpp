#include <iostream>
using namespace std;

int isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        int a=-1, b=-1;
        if(l<r)
        {            
            if(r%2!=0) 
            {
                r--;
                if(r-2>1)
                {
                    a=r-2;
                    b=2;
                }
            } 
            else
            {
                if(r-2>1)
                {
                    a=r-2;
                    b=2;
                }
            }           
        }
        else
        {
            if(l%2!=0)
            {
                int div=isPrime(l);
                if(div!=1)
                {
                    if(l-div > 1)
                    {
                        a=div;
                        b=l-div;
                    }
                }
            }
            else
            {
                if(l-2>1)
                {
                    a=l-2;
                    b=2;
                }
            }
        }
        if(a>0) cout << a << " " << b << "\n";
        else cout << "-1\n";
    }
    return 0;
}