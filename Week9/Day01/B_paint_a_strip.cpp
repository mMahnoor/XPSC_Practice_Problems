#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int val=1, cnt=1;
        while(val<n)
        {
            val=(val*2)+2;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}