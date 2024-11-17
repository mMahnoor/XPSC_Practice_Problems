#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int N;
	    cin >> N;
	    
	    string s;
	    cin >> s;
	    
	    int cnt1=0, cnt2=0;
	    
	    for(int i=0; i<N; i++)
	    {
	        if(s[i]=='0')
	        {
	            cnt1++;
	            while(s[i]=='0')
	            {
	                i++;
	            }
	        }
	    }
	    for(int i=0; i<N; i++)
	    {
	        if(s[i]=='1')
	        {
	            cnt2++;
	            while(s[i]=='1')
	            {
	                i++;
	            }
	        }
	    }
	    cout << min(cnt1, cnt2) << "\n";
	}
    return 0;
}
