// https://www.codechef.com/problems/MEBA?tab=statement

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    int max_val = 0;
	    for(int i=0; i<N; i++)
	    {
	        cin >> A[i];
	        if(max_val<A[i]) max_val=A[i];
	    }
	    int val=A[0];
	    int all_same=1;
	    for(int i=1; i<N; i++)
	    {
	        if(val!=A[i])
	        {
	            if((val!=0&&val!=max_val) || (A[i]!=0&&A[i]!=max_val))
	                all_same=0;
	        }
	        
	    }
	    if(all_same) cout << "YES\n";
	    else cout << "NO\n";
	}
    return 0;
}
