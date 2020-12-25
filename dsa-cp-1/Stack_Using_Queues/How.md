## Implementation of Stack Using Queues

### Method 1:

```c++

#include <bits/stdc++.h> 

using namespace std; 

class Stack { 
	queue<int> q1, q2; 

	int curr_size; 

public: 
	Stack() 
	{ 
		curr_size = 0; 
	} 

	void push(int x) 
	{ 
		curr_size++; 

		q2.push(x); 

		while (!q1.empty()) { 
			q2.push(q1.front()); 
			q1.pop(); 
		} 

		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 
	} 

	void pop() 
	{ 
		if (q1.empty()) 
			return; 
		q1.pop(); 
		curr_size--; 
	} 

	int top() 
	{ 
		if (q1.empty()) 
			return -1; 
		return q1.front(); 
	} 

	int size() 
	{ 
		return curr_size; 
	} 
}; 

int main() 
{ 
	Stack s; 
	s.push(1); 
	s.push(2); 
	s.push(3); 

	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 

	cout << "current size: " << s.size() << endl; 
	return 0; 
} 

```

#### Output:
<pre>
current size: 3
3
2
1
current size: 1
</pre>

#### Explanation:
- Makes push operation costly.
- push(s, x) operation:
  - Enqueue x to q2
  - One by one dequeue everything from q1 and enqueue to q2.
  - Swap the names of q1 and q2
- pop(s) operation:
  - Dequeue an item from q1 and return it.
  
### Method 2:

```c++

#include <bits/stdc++.h> 
using namespace std; 

class Stack { 
	queue<int> q1, q2; 
	int curr_size; 

public: 
	Stack() 
	{ 
		curr_size = 0; 
	} 

	void pop() 
	{ 
		if (q1.empty()) 
			return; 

		while (q1.size() != 1) { 
			q2.push(q1.front()); 
			q1.pop(); 
		} 

		q1.pop(); 
		curr_size--; 

		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 
	} 

	void push(int x) 
	{ 
		q1.push(x); 
		curr_size++; 
	} 

	int top() 
	{ 
		if (q1.empty()) 
			return -1; 

		while (q1.size() != 1) { 
			q2.push(q1.front()); 
			q1.pop(); 
		} 

		int temp = q1.front(); 

		q1.pop(); 

		q2.push(temp); 

		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 
		return temp; 
	} 

	int size() 
	{ 
		return curr_size; 
	} 
}; 

int main() 
{ 
	Stack s; 
	s.push(1); 
	s.push(2); 
	s.push(3); 
	s.push(4); 

	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	cout << "current size: " << s.size() << endl; 
	return 0; 
} 

```

#### Output:
<pre>
current size: 4
4
3
2
current size: 2
</pre>

#### Explanation:
- Makes pop operation costly.
- push(s, x) operation:
  - Enqueue x to q1 (assuming size of q1 is unlimited).
- pop(s) operation:
  - One by one dequeue everything except the last element from q1 and enqueue to q2.
  - Dequeue the last item of q1, the dequeued item is result, store it.
  - Swap the names of q1 and q2
  - Return the item stored in step 2.

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>
