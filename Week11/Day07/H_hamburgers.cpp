// Problem Link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string t;
    cin >> t;
    long long nb, ns, nc, pb, ps, pc, rb, b=0, s=0, c=0;
    for (int i = 0; i < t.size(); i++)
    {
        if(t[i]=='B') b++;
        else if(t[i]=='S') s++;
        else c++;
    }
    
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> rb;
    long long i = 1, j = 1e14, mid, res=0;
    while (i <= j) {
        mid = (i+j)/2;
        long long mb=0, ms=0, mc=0;
        if((mid*b)>nb) mb=(mid*b)-nb;
        if((mid*s)>ns) ms=(mid*s)-ns;
        if((mid*c)>nc) mc=(mid*c)-nc;
        long long total=(mb*pb)+(ms*ps)+(mc*pc);
        if (total<=rb) 
        {
            res=mid;
            i = mid+1;
        }
        else 
        {
            j = mid-1;
        }
    }       
    cout << res << "\n";
    return 0;
}