#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
   int n;
   cin >> n;
   string s, rev;
   cin >> s;
   rev = s;
   reverse(rev.begin(), rev.end());
   
   vector<int> v(n);
   map<char, vector<int> > s_pos, rev_pos;
   pbds<int> p;
   long long cnt = 0;
   
   for (int i = 0; i < n; i++) {
      s_pos[s[i]].push_back(i);
      rev_pos[rev[i]].push_back(i);
   }
   for (char c = 'a'; c <= 'z'; c++) {
      for (int i = 0; i < s_pos[c].size(); i++) {
         v[rev_pos[c][i]] = s_pos[c][i];
      }
   }
   for (int i = n - 1; i >= 0; i--)
   {
      cnt += p.order_of_key(v[i]);
      p.insert(v[i]);
   }
   cout << cnt << "\n";

   return 0;
}