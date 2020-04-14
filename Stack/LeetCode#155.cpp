class MinStack {
public:
    /** initialize your data structure here. */
    int min = INT_MAX;
    stack<int> s;
    MinStack() {

    }
    
    void push(int x) {
       if(s.empty())
        {
            s.push(x);
            s.push(x);
        }
        else
        {
            int temp=s.top();
            s.push(x);
            if(x<temp)
            {
                s.push(x);
            }
            else
            {
                s.push(temp);
            }
        }

    }
    
    void pop() 
    {
        s.pop();
        s.pop();
        

    }
    
    int top() {
       int temp=s.top();
        s.pop();
        int top=s.top();
        s.push(temp);
        return top;

    }
    
    int getMin() {
       return s.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
