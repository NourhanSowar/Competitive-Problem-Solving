class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        int sum_max= nums[0];
        int sum_including_current = nums[0];
        
        for (int n: nums){
            sum_including_current= max(sum_including_current+n,n);
            cout <<"sum_including_current : "<<sum_including_current;
            
            sum_max= max(sum_max, sum_including_current);
        }
        
        return sum_max;
        
    }
};