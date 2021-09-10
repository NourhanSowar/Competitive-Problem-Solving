#include <iostream>
#include <sstream>
#include <iterator>
#include <set>

using namespace std; 


class Solution {
    public:
        int maxs (int x, int y){
            return  (x>y) ? x :y;
        }
    public :
        int lengthOfLongestSubstring(string s) {

            int i=0 ;
            int j=0;
            int returned_length =0;
            set<char>hash; // create hashset to store the unique elements.

            while (i<s.length() && j<s.length() ){

                 /* if 2 elemtns in hashset are repeated , then, remove the first repeated elemtent 
                 and change the start point by increment i */
                if (hash.count(s[j])){
                    
                    hash.erase(s[i]);
                    i=i+1;
                }
                /* insert the unique element in hash and increment j and  increment the returned length using maxs function*/
                else{
                    hash.insert(s[j]);
                    j=j+1;

                    returned_length = maxs(j-i,returned_length );

                }
            }
            return returned_length;
        }
        
};
int main (){
    
    string mystring;
    cout << "Enter the string:";
    cin >> mystring;
    
    //cout<< mystring;

    Solution myobj;
    cout<< myobj.lengthOfLongestSubstring(mystring);
  
    
    return 0;    
 }
