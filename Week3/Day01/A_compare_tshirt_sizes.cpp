#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        
        cin >> a >> b;
        int a_len = a.size();
        int b_len = b.size();
        a.erase(remove(a.begin(), a.end(), 'X'), a.end());
        b.erase(remove(b.begin(), b.end(), 'X'), b.end());
        int greater=0, smaller=0, equal=0;

        if(a[0]=='S' && (b[0]=='M'||b[0]=='L')) smaller=1;
        else if(a[0]=='M' && b[0]=='L') smaller=1;
        else if(b[0]=='S' && (a[0]=='M'||a[0]=='L')) greater=1;
        else if(b[0]=='M' && a[0]=='L') greater=1;
        else if(a[0]==b[0])
        {
            if(a[0]=='S')
            {
                if(a_len>b_len) smaller=1;
                else if(a_len<b_len) greater=1;
                else equal=1;
            }
            else if(a[0]=='L')
            {
                if(a_len>b_len) greater=1;
                else if(a_len<b_len) smaller=1;
                else equal=1;
            } 
            else equal=1;
        }     
        
        if(greater) cout << '>' << "\n";
        else if(smaller) cout << '<' << "\n";
        else cout << '=' << "\n";
    }
    return 0;
}