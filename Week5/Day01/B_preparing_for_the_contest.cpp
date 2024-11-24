#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(k==0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            
        }
        else
        {
            int m=n;
            for (int i = 1; i <= n; i++)
            {
                if(k>0)
                {
                    cout << i << " ";
                    k--;
                }
                else
                {
                    cout << m << " ";
                    m--;
                }
            }
            
        }
        cout << "\n";
    }
    return 0;
}