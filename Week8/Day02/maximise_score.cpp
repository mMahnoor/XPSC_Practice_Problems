#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        long long N;
        cin >> N;
        long long A[N];
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
        }
        long long minS=abs(A[0]-A[1]);
        minS=min(minS, abs(A[N-1]-A[N-2]));
        for(long long i=1; i<N-1; i++)
        {
            long long val1 = abs(A[i]-A[i-1]);
            long long val2 = abs(A[i]-A[i+1]);
            if(val1<minS && val2<minS) minS=max(val1, val2);
        }
        cout << minS << "\n";
    }
	return 0;
}
