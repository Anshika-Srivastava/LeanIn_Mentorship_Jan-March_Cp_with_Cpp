class MyStack {
public:
	queue<int> q1;
	queue<int> q2;

	MyStack() {

	}

	void push(int x) {
		q1.push(x);
		while(!q2.empty())
		{
			q1.push(q2.front());
			q2.pop();
		}
		queue<int> temp=q1;
		q1=q2;
		q2=temp;
	}

	int pop() {
		int n=q2.front();
		q2.pop();
		return n;
	}

	int top() {
		return q2.front();
	}

	bool empty() {
		if(q1.empty() && q2.empty() ) return true;
		else return false;
	}
};
