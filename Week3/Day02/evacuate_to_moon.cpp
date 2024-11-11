#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int N, M, H;
	    cin >> N >> M >> H;
	    
	    vector<long long int> A, B;
	    for(int i=0; i<N; i++)
	    {
	        int val;
	        cin >> val;
	        A.push_back(val);
	    }
	    sort(A.begin(), A.end(), greater<long long int>());
	    for(int i=0; i<M; i++)
	    {
	        int val;
	        cin >> val;
	        B.push_back(val);
	    }
	    sort(B.begin(), B.end(), greater<long long int>());
	    long long int total=0;
	    int K=min(N, M);
	    for(int i=0; i<K; i++)
	    {
	        long long int p = B[i]*H;
	        if(A[i]<p)
	        {
	            total+=A[i];
	        }
	        else total+=p;
	    }
	    cout << total << "\n";
	}
    return 0;
}
