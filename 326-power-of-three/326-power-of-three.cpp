class Solution {
public:
    bool isPowerOfThree(int n)
    {
        //The simple approach is to keep dividing the number by 3 till it reaches 0
        if(n<1)
            return false;
        while(n % 3 == 0)
        {
            n = n / 3;
        }
        return n == 1;
    }
};