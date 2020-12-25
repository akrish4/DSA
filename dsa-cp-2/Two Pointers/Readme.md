# Topic :closed_book:
### Two Pointer Technique
## What is the problem? :monocle_face:
#### There are certain problems/questions in which you have to find a pair of numbers which meet a certain criteria. You will be given an array and a target number. So you have to find two numbers in the array which add up to the target number. Addition is just an example. It can also be multiplication and other stuff.
## How to solve this problem? :nerd_face:
#### The intuitive solution would be to run a loop for each and every element and add it with every other element. This would be your brute force approach as you are checking all the possibilities.
## Code Snippet:(Brute Force)
#### for(int i=0;i<arr.size();i++)
#### {
#### for(int j=i+1;j<arr.size();j++)
#### {
####  if(arr[i]+arr[j]==target)
#### {
####  cout<<arr[i]<<" "<<arr[j]<<endl;
####  }
####  }
#### }
#### This loop is the implementation of the naive idea discussed above.
## Can we do better?? :sunglasses:
#### Of course we can, The above code's complexity is O(n^2). This is where the Two Pointer Technique comes in which gives us the answer in O(n) time complexity. If the input is not sorted the complexity would be O(nlogn). Logn to sort the array :exploding_head:
## What is the Two Pointer Technique? 
#### Well, as the name suggests, we will use two pointers. First and foremost the two pointer technique works only on a sorted array. So we have to sort the array first if it is not sorted. After that we keep the first pointer on first element and the second pointer on the last element. We add and check if they are equal to the target. If the sum is bigger than the target we shift the second pointer to the left(i.e to the second last element). If the sum is smaller we move the first pointer to the right. Since the array is sorted we know that if the sum is less we have to move the first pointer to the right to get a bigger sum and reach the target. Opposite logic if the sum is bigger than the target.Here is the illustration for the following technique. Here X is the target sum.
![](https://media.geeksforgeeks.org/wp-content/uploads/two-pointer-technique.png)
