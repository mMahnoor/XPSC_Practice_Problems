#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max_bit=30;
        vector<int> bits(31);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= max_bit; j++)
            {
                if((a[i]>>j)&1) bits[j]++;
            }
            
        }
        int max_and=0;
        for (int j = max_bit; j >= 0; j--)
        {
            if(bits[j]==n) 
            {
                max_and+=(1LL<<j);
            }
            else{
                if(n-bits[j]<=k)
                {
                    max_and+=(1LL<<j);
                    k-=(n-bits[j]);
                }
            }
        }
        cout << max_and << "\n";
    }
    return 0;
}