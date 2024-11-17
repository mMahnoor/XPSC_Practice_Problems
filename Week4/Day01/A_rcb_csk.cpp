#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    
    if(X>Y && X-Y>=18) cout << "RCB\n";
    else cout << "CSK\n";
    
    return 0;
}
