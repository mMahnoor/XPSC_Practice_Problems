#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        long long N;
        cin >> N;
        long long x=N, y=--N;
        cout << x << " " << y <<"\n";
    }
	return 0;
}
