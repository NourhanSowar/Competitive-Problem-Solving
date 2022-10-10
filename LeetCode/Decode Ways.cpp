class Solution {
public:
    int numDecodings(string s) {

        if (s.length()<1)
            return 0;
        if (s[0]=='0')
            return 0;
        if (s.length()==1)
            return 1;
        
        int val1=1;
        int val2=1;
        
        for (int i =1; i < s.length();++i)
        {
            int d1= s[i]-'0'; 
            int d2=(s[i-1]-'0')*10 +d1;
            
            int current_value=0;
            
            if(d1>=1)
                current_value+=val2;
            if(d2>=10 && d2<=26)
                current_value+=val1;
            
            
            val1=val2;
            val2=current_value;
            
            
        }
        return val2;
    }
};