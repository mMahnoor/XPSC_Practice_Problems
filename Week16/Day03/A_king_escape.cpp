#include <iostream>
using namespace std;

int main()
{
    int n, ax, ay, bx, by, cx, cy, flag=0;
    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    if((bx>ax && cx>ax) && (by>ay && cy>ay))
    {
        flag=1;
    }
    else if((bx<ax && cx<ax) && (by<ay && cy<ay))
    {
        flag=1;
    }
    else if((bx>ax && cx>ax) && (by<ay && cy<ay))
    {
        flag=1;
    }
    else if((bx<ax && cx<ax) && (by>ay && cy>ay))
    {
        flag=1;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}