#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int longestValidParentheses(string s)
    {
        // create stack to store the position of open brackets       
        stack <int> stk;
        stk.push(-1);
        int result= 0;
        for (int i=0; i < s.length(); i++)
        {

            if (s[i]=='(')
            {
                stk.push(i); // push the index of '(' to the stack
            }
            else  
            {
                if(!stk.empty())  //in case')', pop the last '('
                {
                    stk.pop();
                }
                if (!stk.empty()) 
                {
                    result= max(result, i -stk.top());// get the length of current valid ()
                }
                else 
                {
                    stk.push(i); // push current index for next iteration.
                }

            }        

        }
    return result;
    }
};


int main (){

    string input_str;
    cout << "Enter the string:";
    cin >> input_str;

    //cout << input_str;
    
    Solution myobj;
     cout << myobj.longestValidParentheses(input_str);
    
    return 0;    
 }