#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0) 
    {
        int res=n/2;
        cout << res << "\n";
        for (int i = 0; i < res; i++)
        {
            cout << 2 << " ";
        }
    }
    else 
    {
        int res = (n-3)/2;
        cout << res+1 << "\n";
        for (int i = 0; i < res; i++)
        {
            cout << "2 ";
        }
        cout << "3";
    }
    cout << "\n";
    return 0;
}