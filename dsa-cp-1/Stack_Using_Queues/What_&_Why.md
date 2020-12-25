## Stack Using Queues

In this problem, we are given a queue data structure, and we have to form a stack data structure using it. Stack follows LIFO whereas Queue follows FIFO.

Some properties and operations of Queue data structure:
- enqueue() and dequeue()
- Push from back
- Pop from front

Hence we need to implement Stack data structure using only instances and operations of Queue.

![Stack-Queue](https://user-images.githubusercontent.com/43854410/101608220-707a4c80-3a2b-11eb-9fcc-690ff8629b07.png)

A stack ('s') can be implemented using two queues ('q1' and 'q2'). 

### Method 1:

- This method makes sure that newly entered element is always at the front of ‘q1’ queue, so that the pop operation just dequeues from ‘q1’. 
- ‘q2’ queue is used to put every new element at front of ‘q1’ queue.

### Method 2:

- In this method, in push() operation the new element is always enqueued to 'q1'. 
- In pop() operation, if 'q2' is empty then all the elements except the last, are moved to 'q2'. 
- Finally the last element is dequeued from 'q1' and returned.

We will look at their implementation in the next markdown!

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>
