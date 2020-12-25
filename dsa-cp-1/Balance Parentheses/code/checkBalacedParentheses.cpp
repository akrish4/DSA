#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check whether two characters are opening
// and closing of same type.
bool isValidPair(char opening, char closing)
{
	if (opening == '(' && closing == ')')
		return true;
	else if (opening == '{' && closing == '}')
		return true;
	else if (opening == '[' && closing == ']')
		return true;
	return false;
}
bool checkBalancedParentheses(string exp)
{
	//Stack declaration
	stack<char> s;

	for (int i = 0; i < exp.length(); i++)
	{
		//Push the opening brackets into stack
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			//If closing brack is encountered and the stack is empty we return false, If the top and the closing bracket doesn't match we return false.
			if (s.empty() || !isValidPair(s.top(), exp[i]))
				return false;
			else
				s.pop();
		}
	}

	//If stack is empty return true
	return s.empty() ? true : false;
}

int main()
{

	string exp;
	exp = "[(])";
	if (checkBalancedParentheses(exp))
		cout << "Balanced\n";
	else
		cout << "Not Balanced\n";

	return 0;
}