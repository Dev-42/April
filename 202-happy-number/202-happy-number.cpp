class Solution {
private:
    int next(int n)
    {
        int res = 0;
        while(n != 0)
        {
            int p = n % 10;
            res += pow(p,2);
            n /= 10;
        }
        return res;
    }
public:
    bool isHappy(int n)
    {
        int slow = next(n);
        int fast = next(next(n));
        
        while(slow != fast)
        {
            slow = next(slow);
            fast = next(next(fast));
        }
        return (slow == 1);
    }
};