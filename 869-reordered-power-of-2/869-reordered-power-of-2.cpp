class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // convert it to String in order to Sort it
        string s = to_string(n); 
        
        
        // sort the string , 
        
        sort(s.begin(),s.end());  
        
        // Count the power of 2 using the power function
        
        for(int i =0 ;i<=30;i++){ 
             int p = pow(2,i);     
            
             // Conver to String and Sort it
            
            string cs = to_string(p); 
            
            sort(cs.begin(),cs.end());
            if(cs == s){   // if the Power is Found , Return True , 
                return true;
            }
        }
        return false;  // Else Return False
    }
};