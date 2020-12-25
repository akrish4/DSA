# Breadth-First

## What is Breadth-First Search

    It is the Tree Traversal Algorithm in which tree is traverse through level wise,Means traverse tree node's of same height at once and then move to next level(from top to bottom).

## Approach

        Here we have to traverse tree node's in level wise order and this approach is similar FIFO approach.
        Well then use 'Queue' data Structure to traverse the tree in FIFO order.
        What we will do is start from root called current Node and check for it's child's if it has then add into queue else print it's data and move to next element of queue and do this until queue does not become empty.

## Example

        Take following BST to traverse in Breadth-first order.
                ________4________
               |                 |
           ____2____         ____6____
          |         |       |         |
          1         3       5         7

    Steps to Breadth-First order :
    1. Add Root data i.e. '4'
        ans = ""  and  Queue = {4}
    2. print '4' first and add '2' and '6' into Queue.
        ans = "4"  and  Queue = {2,6}
    3. Remove '2' from Queue, print it and
    add '1' and '3' into Queue.
        ans = "4 2"  and  Queue = {6,1,3}
    4. Remove '6' from Queue, print it and
    add '5' and '7' into Queue.
        ans = "4 2 6"  and  Queue = {1,3,5,7}
    5. Now there is no single node into Queue who has left or right node then just print them
        ans = "4 2 6 1 3 5 7"
    6. That's Done.

## Time Complexity

    We have to traverse all nodes present in tree so time complexity is nothing but number of nodes present in tree.
    i.e. O(n) where n = number of nodes in tree.

## Myself

I am [Rohit Pawar](https://github.com/RohitsSkill)
From Jawahar education Society, Institute of technology, Nasik, India.
I am Active on LinkedIn so You can also ping me at [LinkedIn](https://www.linkedin.com/in/rohit-pawar-1a18481b2/)
