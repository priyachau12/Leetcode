class MyQueue {
    stack<int> s1; // Stack used for pushing elements
    stack<int> s2; // Stack used for popping/peeking elements

public:
    MyQueue() {}
    
    void push(int x) {
        // Push the element directly onto s1
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()) {
            // Transfer all elements from s1 to s2 if s2 is empty
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        if (s2.empty()) return -1; // Edge case: no elements in the queue

        int topElement = s2.top();
        s2.pop();
        return topElement;
    }
    
    int peek() {
        if (s2.empty()) {
            // Transfer all elements from s1 to s2 if s2 is empty
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) return -1; // Edge case: no elements in the queue

        return s2.top();
    }
    
    bool empty() {
        // Queue is empty if both stacks are empty
        return s1.empty() && s2.empty();
    }
};
