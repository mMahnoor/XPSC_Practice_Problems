#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        int maxA=0, minA=INT_MAX, maxB=0, minB=INT_MAX;
        long long sumA=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxA = max(maxA, a[i]);
            minA = min(minA, a[i]);
            sumA+=a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            maxB = max(maxB, b[i]);
            minB = min(minB, b[i]);
        }
        if(k%2!=0)
        {
            if(minA<maxB)
            {
                sumA -= minA;
                sumA += maxB;
            }
        }
        else
        {
            if(minA<maxB)
            {
                sumA -= minA;
                sumA += maxB;
            }
            if(maxB<maxA)
            {
                if(minA<minB)
                {
                    sumA -= maxA;
                    sumA += minA;
                }
                else
                {
                    sumA -= maxA;
                    sumA += minB;
                }
            }
            else
            {
                if(minA<minB)
                {
                    sumA += minA;
                    sumA -= maxB;
                }
                else
                {
                    sumA += minB;
                    sumA -= maxB;
                }
            }
        }
        cout << sumA << "\n";
    }
}