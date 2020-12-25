## Count Distinct Elements

What we are given in this problem is that we have an array which contains 'n' elements. The elements can be repetitive. We need to find the number of distinct elements present in it and give the count as the output.

#### For example:
<pre>
Input: arr[] = {10, 20, 20, 10, 30, 10}
Output: 3
Explanation: There are three distinct elements 10, 20 and 30.

Input: arr[] = {10, 20, 20, 10, 20}
Output: 2
Explanation: There are two distinct elements 10 and 20.
</pre>

There can be 3 methods used for this purpose. We will look at the approach of each of them one by one:

### Method 1 Approach

- This is the <b>brute force</b> approach. 
- Here we run two nested loops.
- We check for each element, if it is not repeated again, we increment the count of distinct elements.
- Time Complexity: O(n^2)

### Method 2 Approach

- We can use <b>sorting</b> to reduce the time complexity.
- The occurrences of every element will become consecutive.
- Any change in consecutive elements will increment the counter of distinct elements.
- Time Complexity: O(nLogn)

### Method 3 Approach

- We will use <b>hashing</b> in this. 
- We will traverse the array elements one by one.
- Also, keep a check on the number of unique elements using a hash set.
- Time Complexity: O(n)

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>
