#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int A[N], XOR=0;
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
            XOR ^= A[i];
        }
        int min_xor=XOR;
        for(int i=0; i<N; i++)
        {
            int val = XOR ^ A[i];
            min_xor=min(min_xor, val);
        }
        cout << min_xor << "\n";
        
    }
	return 0;
}
