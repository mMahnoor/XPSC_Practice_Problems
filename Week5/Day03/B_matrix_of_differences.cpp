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

        long long int a[n][n];
        long long int l=1, u=n*n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, k = n-1; j < n; j++, k--)
            {
                if(i%2==0)
                {                    
                    if(j%2==0) a[i][j] = u--;
                    else a[i][j] = l++;
                    
                }
                else{
                    if(k%2==0) a[i][k] = l++;
                    else a[i][k] = u--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, k = n-1; j < n; j++, k--)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }

    }
    return 0;
}