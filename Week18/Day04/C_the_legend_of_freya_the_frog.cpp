#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        long long movesX, movesY;
        movesX = (x+k-1)/k;
        movesX += (movesX-1);
        movesY = (y+k-1)/k;
        movesY *= 2;
        cout << max(movesX, movesY) << "\n";
    }
}