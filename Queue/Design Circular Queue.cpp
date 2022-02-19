class MyCircularQueue {
public:
    vector<int> q;
    int size;
    MyCircularQueue(int k) {
        size=k;
    }
    
    bool enQueue(int value) {
        if(q.size()<size){
            q.insert(q.end(),value);
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(q.size()>0)
        {
            q.erase(q.begin());
            return true;
        }
        return false;
    }
    
    int Front() {
        if(q.size()==0)
            return -1;
        return q[0];
    }
    
    int Rear() {
        if(q.size()==0)
            return -1;
        return q[q.size()-1];
    }
    
    bool isEmpty() {
        if(q.size()==0)
            return true;
        return false;
    }
    
    bool isFull() {
        return q.size()==size;
    }
};
