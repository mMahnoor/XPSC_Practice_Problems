#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k=0;
        while(k<n)
        {            
            int op;
            cin >> op;
            for (int i = 0; i < op; i++)
            {
                char c;
                cin >> c;
                if(c=='U')
                {
                    if(a[k]==0) a[k]=9;
                    else a[k]--;
                }
                else{
                    if(a[k]==9) a[k]=0;
                    else a[k]++;
                }
                
            }
            k++;
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
         
    } 
       
    return 0;
}