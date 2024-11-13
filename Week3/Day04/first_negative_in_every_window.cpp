#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int i=0, j=0;
        vector<int> v;
        queue<int> neg_element;
        while(j<arr.size())
        {
            if(arr[j]<0) 
            {
                neg_element.push(arr[j]);
            }
            if(j-i+1==k)
            {
                if(!neg_element.empty())
                {
                    v.push_back(neg_element.front());
                    if(arr[i]<0) neg_element.pop();
                }
                else v.push_back(0);
                i++;
                
            }
            j++;
        }
        return v;
    }
};