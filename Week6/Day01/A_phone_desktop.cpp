#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(x==0 && y==0) cout << "0\n";
        else if(x!=0 && y==0)
        {
            cout << ceil(x/15.0) << "\n";
        }
        else if(x==0 && y!=0)
        {
            int min_sc=0;
            while(y>0)
            {
                min_sc++;
                y-=2;
            }
            cout << min_sc << "\n";
        }
        else
        {
            int min_sc=0, singles=0;
            if(y%2!=0)
            {
                min_sc++;
                singles+=11;
                while(y-1>0)
                {
                    min_sc++;
                    singles+=7;
                    y-=2;
                }
            }
            else
            {
                while(y>0)
                {
                    min_sc++;
                    singles+=7;
                    y-=2;
                }
            }
            while(singles<x)
            {
                singles+=15;
                min_sc++;
            }
            cout << min_sc << "\n";
        }
    }
    return 0;
}