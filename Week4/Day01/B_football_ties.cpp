#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    
	    if(X==0 || Y==0) cout << 0 << endl;
	    else cout << X%3 << endl;
	}
    return 0;
}
