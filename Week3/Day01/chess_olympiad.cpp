#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	
	int games = X+Y+Z;
	int p1 = X+(Y/2);
	int p2 = Z+(Y/2);
	
	if(games==4)
	{
	    if(p1<p2||p1==p2)
	        cout << "NO\n";
	    else cout << "YES\n";
	}
	else if((4-games)<=abs(p2-p1)) cout << "NO\n";
	else cout << "YES\n"; 
    
    return 0;
}
