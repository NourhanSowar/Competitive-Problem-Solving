class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int h_min= height[0];
        int h_max= height[height.size()-1];
        int w = height.size()-1;
        
        int idx_min=0;
        int idx_max= height.size()-1;
        
        //check if h-min is less than h_max, otherwise, flip them
        if (h_min>h_max)
        {
            h_min= h_max;
            h_max= height[0];
            
            idx_min= idx_max;
            idx_max=0;
        }
        
        int max_area=h_min *w;
        
        while (w>0)
        {
            int current_idx= idx_min;
            while (height[current_idx] <= h_min)
            {
               if(idx_min< idx_max)
                   current_idx++; // current index goes left
               
               else 
                    current_idx--;  // current index goes right
                
                w--;
                
                if (w<1)
                    break;  
            }
            
            // check if the current bar is greater than the max height
            if (height[current_idx] >h_max)
            {  
                h_min= h_max;
                idx_min=idx_max;
                
                idx_max=current_idx;
                 h_max= height[current_idx] ;  
            }
            
            else
            {
                idx_min=current_idx;
                h_min=height[current_idx] ;  
            }
            
            max_area= max(max_area, w*h_min);
            
        }
        
        return max_area;
        
    }
};
