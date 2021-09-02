// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
 int firstBadVersion(int n) {
      
     int first_item= 1;
     int last_item = n;
     
     
      while (first_item < last_item ){
        int  Mid_item = (last_item-first_item)/2 + first_item ;
          /* if the mid item is true this is means is bad so need to check the previous items*/
          if ( isBadVersion(Mid_item)) {
              last_item=Mid_item;  
          }
          else{
              /* if the mid item is false this is means is good so need to check the next items*/
              first_item= Mid_item+1;
          }
      }
     
     return first_item;
    }
};