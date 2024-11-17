// Problem link: https://codeforces.com/problemset/problem/1875/A
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x=abs(a-1);
        int y=abs(b-c)+abs(c-1);
        if(x<y) cout << "1\n";
        else if(y<x) cout << "2\n";
        else cout << "3\n";
    } 
    return 0;
}