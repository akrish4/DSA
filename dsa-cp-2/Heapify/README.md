<h1 style="text-align:center;color:#DBD06F">Heapify(used in heap sort)</h1>
<br/>

# What is Heapify ??

Heapify is the process of converting a binary tree into a Heap data structure. A binary tree being a tree data structure where each node has at most two child nodes. ... A Heap must also satisfy the heap-order property, the value stored at each node is greater than or equal to it's children.

# What is Heapify Algorithm ??

Rearrange the heap to maintain the heap property, That is, key of the root node is more extreme than or equal to the keys of its children.

if  the root node's key is not extreme, swap it with most extreme child key, then recursively **Heapify** that child's subtree




<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-8-638.jpg?cb=1542894034">

## Min Heapify Algorithm

```
Step-1 : Always start the leaf node.

Step-2 : find minimum value.

Step-3 : Swap the value.

Step-4 : Go to the upper level.

Step-5: step 1,2,3 continue

... to sort the complete  tree
```

**let take an example**

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-7-638.jpg?cb=1542894034">

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-10-638.jpg?cb=1542894034">

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-11-638.jpg?cb=1542894034">

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-12-638.jpg?cb=1542894034">

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-13-638.jpg?cb=1542894034">

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-14-638.jpg?cb=1542894034">

### **Sorted Complete Binary Tree is**
<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-15-638.jpg?cb=1542894034">


### Output

```
Original Array :   3  2  1  7  8  4  10  16  12

Min-Heap :  1 3 2 7 8 4 10 16 12

Extract Min :  1  2  3  4  7  8  10  12  16
```

***

## Max Heapify Algorithm

```
Step-1 : Always start the top most node.

Step-2 : find maximum value.

Step-3 : Swap the value.

Step-4 : Go to the lower level.

Step-5: step 1,2,3 continue

... to sort the complete  tree
```

**let take an example**

<img src="https://image.slidesharecdn.com/heapifyalgorithm-181122133751/95/heapify-algorithm-18-638.jpg?cb=1542894034">

### Output

```
Original Array :   3  2  1  7  8  4  10  16  12

Max-Heap :  12 10 7 8 2 1 4 0 3

Extract Max :  12  10  8  7  4  3  2  1  0
```


***

***
   ***
   ***

   **<h2 align="center"> Contributed by <a href="https://github.com/sudeepshukla930">Sudeep Shukla</a> With 💜. </h2>**

<br/>

  # Reach me on
<p align='center'>
  <a href="https://www.linkedin.com/in/sudeep-shukla-657384193/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="mailto:sudeepshukla930@gmail.com" target="_blank"><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" alt="gmail"></a>&nbsp;&nbsp;&nbsp;&nbsp;
  
  
</p>

****
****



