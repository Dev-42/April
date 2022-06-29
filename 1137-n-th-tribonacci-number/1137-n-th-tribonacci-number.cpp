class Solution {
public:
    int tribonacci(int n) 
    {
        //Tribonacci means adding up three numbers 
        if(n == 0)
            return 0;
        if(n <= 2)
            return 1;
        else{
            int a = 0, b = 1, c = 1,index = 3,sum = 0;
            while(index <= n)
            {
                sum = a + b + c;
                index++;
                a = b;
                b = c;
                c = sum;
            }
            return sum;
        }
    }
};