#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <bits/stdc++.h>

using namespace std; 


int BinarySearchFun(vector<int>& nums, int target )
{
    int start = 0;
    int end = nums.size()-1;
    
    while (start<=end)
    {
        int Mid_Value = ((end-start)/2)+start;

        if (nums[Mid_Value]== target)
            return Mid_Value; //return the position of target value.
        else if (nums[Mid_Value]>target)  //which means that the target in left side
        {
            end= Mid_Value-1;
        }
        else if (nums[Mid_Value]<target)
        {
            start= Mid_Value+1;
        }    
    }
    return -1;
      
}
 
vector< int > pos;//to store the start and end position of target value

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int returned_pos = BinarySearchFun(nums,target);

            //cout << "returned pos is: " << returned_pos; 
            int left = returned_pos - 1;
            int right = returned_pos + 1;
            pos.push_back(returned_pos);

            if ( nums[right] != target &&  nums[left] != target) 
            {
                //cout << "hi";
                pos.push_back(-1);
                pos.push_back(1);
            }

            while (nums[left] == target){
                //cout << " Left";
                pos.push_back(left);
                left--;
            }
        
            while ( nums[right] == target){
                //cout << "right";
 
                pos.push_back(right);
                right++;
            }
   
            pos[0]=*min_element(pos.begin(), pos.end());
            pos[1]=*max_element(pos.begin(), pos.end());
            pos.erase(pos.begin()+2);
            return pos;
    }
};


/* function to cout the vector directly instead of using for loop*/
void print(vector<int> const &input)
{
    copy( input.begin(), input.end(), ostream_iterator<int>(cout, " "));
}

int main (){
    vector<int> myvector;
    int input_elements ;
    int target_value ;  
    int size;

    cout << "Enter size of array:";
    cin >> size;
    
    cout << "Enter the dynamic array elements : ";
    for (int i=0 ; i <size; i++){
        cin >> input_elements;
        myvector.push_back(input_elements);
    }

    cout<< "Target value want to search to : ";
    cin >> target_value;
    
    //cout <<"result";
    //cout<< BinarySearchFun(myvector, target_value);
    Solution myobj;
   vector< int > result = myobj.searchRange(myvector,target_value);
   //cout <<   "'\n size is : "<<  result.size();
   
   print(result);  


    return 0;    
 }