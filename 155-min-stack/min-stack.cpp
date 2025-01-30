class MinStack {
       stack<pair<int,int>>st;
public:
    MinStack() {
     
    }
    
    void push(int val) {
       if(st.empty()) {
        st.push({val,val});
       }
       else{
        st.push({val,min(val,st.top().second)});

       }
    }
    
    void pop() {
          if(!st.empty()){
        st.top();
        st.pop();
         }
    }
    
    int top() {
    if (!st.empty()) {
        return st.top().first;
    }
    return -1; // Or throw an exception if stack is empty
}
    
    int getMin() {
        if(!st.empty()){
           int s= st.top().second;
           return s;
        }
        else return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */