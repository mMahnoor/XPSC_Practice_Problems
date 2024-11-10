#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int N;
	    cin >> N;
	    
	    int a[N];
	    for(int i=0; i<N; i++)
	    {
	        cin >> a[i];
	    }
	    sort(a, a+N);
	    int min_range=0;
	    if(N>3)
	        min_range = min((a[N-1]-a[2]),min((a[N-3]-a[0]),(a[N-2]-a[1])));
	    cout << min_range << "\n";
	}

}
