// Problem link: https://www.codechef.com/problems/XORRY1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int X;
        cin >> X;
        
        int B = (1<<__lg(X));
        int A = X-B;
        cout << A << " " << B << "\n"; 
    }
    
	return 0;
}
