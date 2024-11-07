// Problem link: https://codeforces.com/problemset/problem/1790/D
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) 
    {
        int n;
        cin >> n;
        int p[n];
        map<int, int> ratings, old_liked, old_disliked;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            ratings.insert(make_pair(p[i],i));
        }
        string s;
        cin >> s;
        int likes=0, dislikes=0;
        vector<int> new_liked, new_disliked;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                likes++;
                old_liked.insert(make_pair(p[i],i));
            }
            else
            {
                dislikes++;
                old_disliked.insert(make_pair(p[i],i));
            }
        }
        map<int, int>::iterator it=ratings.begin();
        for (int i = 0; i < dislikes; i++)
        {
            new_disliked.push_back(it->first);
            it++;
        }
        
        for (int i = 0; i < likes; i++)
        {
            new_liked.push_back(it->first);
            it++;
        }
        it=old_disliked.begin();
        for (int i = 0; i < new_disliked.size(); i++)
        {
            p[it->second]=new_disliked[i];
            it++;

        }
        it=old_liked.begin();
        for (int i = 0; i < new_liked.size(); i++)
        {
            p[it->second]=new_liked[i];
            it++;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}