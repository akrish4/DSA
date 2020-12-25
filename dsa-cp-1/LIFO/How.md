<p><b>Last in, First out</b> system of approach is used in :-</p>


1. Data Structures:
There are data structures like stack and other variants of stack where we use LIFO system for processing the data.
2. Extracting Latest Information:<br>
Computers use LIFO when data needs to be extracted from an array or data buffer. To get the most recent information entered, the LIFO system is used.
<br>

Program example foe LIFO implementation in Stacks:


``` java
// Java program to demonstrate 
// working of LIFO 
// using Stack in Java 
  
import java.io.*; 
import java.util.*; 
  
class GFG { 
    // Pushing element on the top of the stack 
    static void stack_push(Stack<Integer> stack) 
    { 
        for (int i = 0; i < 5; i++) { 
            stack.push(i); 
        } 
    } 
  
    // Popping element from the top of the stack 
    static void stack_pop(Stack<Integer> stack) 
    { 
        System.out.println("Pop :"); 
  
        for (int i = 0; i < 5; i++) { 
            Integer y = (Integer)stack.pop(); 
            System.out.println(y); 
        } 
    } 
  
    // Displaying element on the top of the stack 
    static void stack_peek(Stack<Integer> stack) 
    { 
        Integer element = (Integer)stack.peek(); 
        System.out.println("Element on stack top : " + element); 
    } 
  
    // Searching element in the stack 
    static void stack_search(Stack<Integer> stack, int element) 
    { 
        Integer pos = (Integer)stack.search(element); 
  
        if (pos == -1) 
            System.out.println("Element not found"); 
        else
            System.out.println("Element is found at position " + pos); 
    } 
  
    public static void main(String[] args) 
    { 
        Stack<Integer> stack = new Stack<Integer>(); 
  
        stack_push(stack); 
        stack_pop(stack); 
        stack_push(stack); 
        stack_peek(stack); 
        stack_search(stack, 2); 
        stack_search(stack, 6); 
    } 
} 
```

```
Output:

Pop:
4
3
2
1
0
Element on stack top : 4
Element is found at position 3
Element not found 
```


<hr>

 Contributed by <a href="https://github.com/ShyamKumar1">Shyam Kumar</a> With 💜. 

 Reach me on
<p align='center'>
  <a href="https://www.linkedin.com/in/shyam-kumar-9b9841157/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.instagram.com/_smiling_storm_/" target="_blank"><img src="https://img.shields.io/badge/Instagram-%23E4405F.svg?&style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram"></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="mailto:shyam.ceolife@gmail.com?subject=Olá%20Punit"><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.facebook.com/shyam.george15/" target="_blank"><img src="https://img.shields.io/badge/Facebook-%231877F2.svg?&style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook"></a>&nbsp;&nbsp;&nbsp;&nbsp;
</p>
