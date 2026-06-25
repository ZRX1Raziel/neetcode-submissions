
class MinStack {
   public:
    int topper = -1;

    stack<int> minimum;
    vector<int> stackk;

    MinStack() {
		
    }

    void push(int val) 
    {
        topper += 1;
        stackk.push_back(val);

        if (minimum.empty())
            minimum.push(val);
        else if (minimum.top() < val) 
            minimum.push(minimum.top());
        else 
            minimum.push(val);
        
        
    }

    void pop() 
    {
        topper -= 1;
        stackk.pop_back();
        minimum.pop();
        
    }

    int top() 
    {
        return stackk[topper];

        
    }

    int getMin() 
    {
        return minimum.top();
        
    }
};