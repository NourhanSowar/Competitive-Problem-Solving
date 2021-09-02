#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std; 
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int i =0;
        //cout << "\nOutput of rbegin and rend: ";
        for (auto ir = nums.rbegin(); i<k ; ++ir){
                 cout << *ir << " ";
                 auto it = nums.insert(nums.begin(), *ir);
                 i++  ; 
        }
    
        cout << "The vector elements are: ";
        for (auto it = nums.begin(); it != nums.end(); ++it)
            cout << *it << " ";
    }
};*/



class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k =k%nums.size();
        //reversing all numbers 
        reverse(nums.begin(),nums.end());
        //reversing first k numbers
        reverse(nums.begin(),nums.begin()+k); 
        // revering last n-k numbers
        reverse(nums.begin()+k,nums.end()); 
       cout << "Output of begin and end: ";
        for (int i =0; i != nums.size(); i++)
            cout << nums[i] << " ";
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
    int k ;  
    int size;

    cout << "Enter size of array:";
    cin >> size;
    
    cout << "Enter the dynamic array elements : ";
    for (int i=0 ; i <size; i++){
        cin >> input_elements;
        myvector.push_back(input_elements);
    }

    cout<< "K is : ";
    cin >> k;
    
    //cout << myvector.size() ;
    //print(myvector);

    Solution myobject ;
    //cout << myobject.rotate(myvector,k);
    myobject.rotate(myvector, k);
    
    return 0;    
 }