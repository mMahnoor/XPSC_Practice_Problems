// Problem link: https://www.codechef.com/problems/XORRY2
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
        int cnt=0, id=-1;
        for(int i=__lg(X); i>=0; i--)
        {
            if((A>>i)&1)
            {
                id=i;
                break;
            }
        }
        for(int i=id; i>=0; i--)
        {
            if(!((X>>i)&1))
            {
                cnt++;
            }
        }
        cout << (1<<cnt) << "\n";
    }
    
	return 0;
}
