#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long A, B, x, y, z;
        cin >> A >> B;
        x=A*B;
        y=x+A;
        z=x+y;
        if(z%A==0 && z%x!=0 && y%x!=0)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << "\n";
        } 
        else cout << "NO\n";
    }
    return 0;
}