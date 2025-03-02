#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int max_rating=a[n-1];
        long long int min_rating = a[n-2];
        for (int i = 0; i < n-2; i++)
        {
            min_rating-=a[i];
        }
        cout << max_rating-min_rating << "\n";
    }
    return 0;
}