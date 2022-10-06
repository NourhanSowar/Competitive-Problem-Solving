class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*  
//---------------First Approach----------------------------//
        vector<int> result;
        
        for (auto i= nums.begin(); i != nums.end(); ++i)
        {
            auto current_iteator = find(i+1, nums.end(), target- *i);
            if (current_iteator != nums.end())  //found the number
            {
                result.push_back(current_iteator - nums.begin());
                result.push_back(i - nums.begin());
                
                break;
                
            }
            
        }
        
        return result;*/
        

 //--------Second approach using map--------------------//
    unordered_map<int, int> _map;
    for (int i =0; i != nums.size(); ++i)
    {
        int current_number= nums[i];
        int complement = target- current_number;
        
        auto iterator = _map.find(complement);
        if (iterator != _map.end()) //found it
        {
            return {iterator->second , i}; //return vector
        }
        
        _map[current_number]= i;
    }
    return {};
    }
};