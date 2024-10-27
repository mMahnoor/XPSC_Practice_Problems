// Problem link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;    
    s+=to_string(N);
    int len = s.length();
    for (int i = 0; i < 4-len; i++)
    {
        s = to_string(N/10000)+s;
    }
    cout << s << endl;
    return 0;
}