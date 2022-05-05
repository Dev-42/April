class MyStack {
public:
    queue<int> q;
    int size=0;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        size++;
    }
    
    int pop() {
        int i=0;
        while(i<size-1)
        {
            int temp=q.front();
            q.pop();
            q.push(temp);
            i++;
        }
        int ans=q.front();
        q.pop();
        size--;
        return ans;
    }
    
    int top() {
        int i=0;
        while(i<size-1)
        {
            int temp=q.front();
            q.pop();
            q.push(temp);
            i++;
        }
        int ans1=q.front();
        q.pop();
        q.push(ans1);
        return ans1;
        
    }
    
    bool empty() {
        if(size==0)
            return true;
        else
            return false;
    }
};