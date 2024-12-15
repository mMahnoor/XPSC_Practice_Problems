#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, minOp=INT_MAX;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]=0;
        }
        map<char, int>::iterator it1=freq.begin(), it2;
        while(it1!=freq.end())
        {
            int i=0, j=n-1;
            while(i<j)
            {
                if(s[i]!=s[j])
                {
                    if(it1->first==s[i]) 
                    {
                        it1->second++;
                        i++;                        
                    }
                    else if(it1->first==s[j])
                    {
                        it1->second++;
                        j--;
                    }
                    else
                    {
                        it1->second=INT_MAX;
                        break;
                    }
                }
                else
                {
                    i++;
                    j--;
                }
            }
            it1++;
        }
        it2=freq.begin();
        while(it2!=freq.end())
        {
            minOp=min(minOp, it2->second);
            it2++;
        }
        if(minOp==INT_MAX) cout << "-1\n";
        else cout << minOp << "\n";
    }
    return 0;
}