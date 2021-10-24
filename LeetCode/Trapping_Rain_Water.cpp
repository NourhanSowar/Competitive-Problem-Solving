#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std; 

class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;
         
        for(int i = 0; i < height.size(); i++)
        {
            int maxLeft = 0, maxRight = 0;

            for(int j = i; j >= 0 ; j--)
            {
                maxLeft = max(maxLeft, height[j]);
            }
            for(int j = i; j < height.size() ; j++)
            {
                maxRight = max(maxRight, height[j]);
            }
            result += min(maxLeft, maxRight) - height[i]; // this eqn is to get the current trap
        }
        return result;
    }
};

/* function to cout the vector directly instead of using for loop*/
void print(vector<int> const &input)
{
    copy( input.begin(), input.end(), ostream_iterator<int>(cout, " "));
}

int main()
{
    vector<int> myvector;
    int input_elements ;
    int k ;  
    int size;

    cout << "Enter size of array:";
    cin >> size;
    
    cout << "Enter the dynamic array elements : ";
    for (int i=0 ; i <size; i++){
        cin >> input_elements;
        myvector.push_back(input_elements);
    }
    //print(myvector);
    Solution myobj;
    cout << myobj.trap(myvector);
}