#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long divisors[n];
    deque<long long> d1, d2;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            d1.push_back(i);
            if(i!=(n/i)) d2.push_front(n/i);
        }
    }
    if(k<=d1.size()) cout << d1[k-1] << "\n";
    else if((k-d1.size())<=d2.size()) cout << d2[k-d1.size()-1] << "\n";
    else cout << "-1\n";
    return 0;
}