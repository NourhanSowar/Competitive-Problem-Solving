#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std; 

class Solution{
  public:
    int search(vector<int> &nums, int target)
    {
        int Left_Side =0;
        int Right_Side = nums.size() -1;

        while (Left_Side<= Right_Side){

          int Mid_Value = ((Right_Side-Left_Side)/2)+Left_Side;
          if ( nums[Mid_Value] == target){
            return Mid_Value; // return the position of target value
          }
          else if ( nums[Mid_Value] < target){  // target is in the right side
            Left_Side = Mid_Value+1;
          }
          else if (nums[Mid_Value] > target){ // target is in the left side
            Right_Side = Mid_Value-1;
          }
        }
        if (nums.size()==0){
          return -1;
        }
        return -1;    
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
    
    //cout << myvector.size() ;
    //print(myvector);

    Solution myobject ;
    cout << myobject.search(myvector,target_value);
    
    return 0;    
 }