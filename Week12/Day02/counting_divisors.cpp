#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int mxN=1000005;
    vector<int> divisors(mxN);
    for (int i=1; i<mxN; i++) {
        for (int j=i; j<mxN; j+=i) {
            divisors[j]++;
        }
    }
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cout << divisors[x] << "\n";
    }
}