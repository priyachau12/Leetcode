// #include <queue>
// using namespace std;

// class MyStack {
// private:
//     queue<int> q1; // Main queue to hold elements
//     queue<int> q2; // Auxiliary queue for operations

// public:
//     MyStack() {
//         // Constructor
//     }
    
//     // Push element x onto stack
//     void push(int x) {
//         q2.push(x); // Push the new element into the auxiliary queue
        
//         // Transfer all elements from q1 to q2
//         while (!q1.empty()) {
//             q2.push(q1.front());
//             q1.pop();
//         }
        
//         // Swap the names of q1 and q2
//         swap(q1, q2);
//     }
    
//     // Removes the element on the top of the stack and returns it
//     int pop() {
//         if (q1.empty()) return -1; // Edge case: stack is empty
//         int topElement = q1.front();
//         q1.pop();
//         return topElement;
//     }
    
//     // Get the top element
//     int top() {
//         if (q1.empty()) return -1; // Edge case: stack is empty
//         return q1.front();
//     }
    
//     // Returns whether the stack is empty
//     bool empty() {
//         return q1.empty();
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */


#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q; // Main queue to hold elements
    // Auxiliary queue for operations

public:
    MyStack() {
        // Constructor
    }
    
    // Push element x onto stack
    void push(int x) {
        // Push the new element 
        
        q.push(x);
        for(int i=1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
        
      
        
    }
    
    // Removes the element on the top of the stack and returns it
    int pop() {
      int top=q.front();
      q.pop();
      return top;
    }
    
    // Get the top element
    int top() {
        return q.front();
    }
    
    // Returns whether the stack is empty
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
