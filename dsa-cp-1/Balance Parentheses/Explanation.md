### Check For Balance Parentheses 🙇

In this problem we will be given a string expression consisting of opening and closing brackets. We have to write a program which checks wheather the given string of brackets are balanced or not.

Balanced brackets means every opening bracket must find a closing counter part to its right and every closing bracket must find a opening counter part to its left.
```
example : {[()]} In this string all the brackets are balanced.
{() this string is not balanced because one bracket is opening but not closing.
[(]) this string is also not balanced 
```

We have to keep in mind that a bracket can close only when all the brackets opened after it are closed

**This problem can be solved using stack**

#### Method 🤔
▶️ create an empty stack of char type
▶️ start scanning the string from left to right
▶️ If an opening bracket is encountered push it into the stack
▶️ If a closing bracket is encountered we will check whether the character on top of stack is of the same type as the closing symbol 
▶️ If it is of same type then we pop the top of the stack.
▶️ If it is not the same type we can say that the brackets are not balanced return false.
▶️ If stack becomes empty we return true that means the brackets are balanced.

#### Implementation 🔰

```c++

bool isValidPair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool checkBalancedParentheses(string exp) {
    int n = exp.length();
    stack<char> s;

    for (int i = 0; i < n; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
            if(s.empty() || !isValidPair(s.top(), exp[i]))
                return false;
            else 
                s.pop();
        }
    }    

    return s.empty() ? true : false;  
}
```

<h3 align="center"> Contributed by <a href="https://github.com/KunalMahato11">Kunal Mahato</a> With ❤️.</h3>
