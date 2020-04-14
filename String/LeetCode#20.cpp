class Solution {
public:
    bool isValid(string s) {
        stack<char> stack_c;
        for(auto c : s)
        {
            switch(c){
                case '(': 
                    stack_c.push(c); break;
                case '{': 
                    stack_c.push(c); break;
                case '[': 
                    stack_c.push(c); break;
                case ')':
                    if (stack_c.empty()) 
                    {
                        return false;
                    }
                    if (stack_c.top() != '(') 
                    {
                        return false;
                    }
                    stack_c.pop();
                    break;
                case '}':
                    if (stack_c.empty())
                    {
                        return false;
                    }
                    if (stack_c.top() != '{') 
                    {
                        return false;
                    }
                    stack_c.pop();
                    break;
                case ']':
                    if (stack_c.empty()) 
                    {
                        return false;
                    }
                    if (stack_c.top() != '[') 
                    {
                        return false;
                    }
                    stack_c.pop();
                    break;
            }
        }
        if(stack_c.empty())
        {
            return true;
        }
        return false;

    }
};
