#include <iostream>
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;
    int i=1;
    int total = 0;
    while(i*A<=T)
    {
        total+=B;
        i++;
    }
    cout << total << endl;
    return 0;
}