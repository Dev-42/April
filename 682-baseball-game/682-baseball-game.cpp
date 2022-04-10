class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        vector<int> score;
        int size = 0;
        for(auto it : ops)
        {
            if(it == "+")
            {
                score.push_back(score[size-1] + score[size-2]);
                size++;
            }
            else if(it == "D")
            {
                score.push_back(score[size-1]*2);
                size++;
            }
            else if(it == "C")
            {
                size--;
                score.pop_back();
            }
            else{
                size++;
                score.push_back(stoi(it));
            }
        }
        
        int sum = 0;
        for(int num : score)
        {
            sum += num;
        }
        return sum;
    }
};