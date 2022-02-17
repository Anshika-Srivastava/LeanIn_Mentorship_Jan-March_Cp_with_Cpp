class MinStack {
public:
    stack<long long int> st;
    stack<long long int> min;
    /** initialize your data structure here. */
    MinStack() {

}

//push operation:
void push(long int val) {
    if(st.empty()!=0){          //if element is first in stack, push it in stack and also in  min.
        st.push(val);
        min.push(val);
    }
    else{
        st.push(val);                 //else push only element in st.
        if(st.top()<min.top()){        //check if element inserted is minimum .
            min.push(val);
        }
        else{
            long int minimm=min.top();         //or else again push the minimum element.
            min.push(minimm);
        }
    }
}

void pop() {                                   //while popping remove the element from both stacks.
    st.pop();
    min.pop();

}

int top() {
    return st.top();                             //returns top of 'st' stack.
}

int getMin() {
    return min.top();                          //returns top of 'min' stack.
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
