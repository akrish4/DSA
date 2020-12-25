#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{   
    // If length of the str are not same then they are not anagrams
    if (s1.length() != s2.length())
        return false;
	
    // Map to store the count of each character
    map<char, int> m;
	
    // Insert string 1 character into map
    for (auto i : s1) {
<<<<<<< HEAD
<<<<<<< HEAD
		m[i]++;
=======
	m[i]++;
>>>>>>> 422a3da41f579236f41d6f781a5982b522b9858c
=======
	m[i]++;
>>>>>>> 5880afa6cc953c5ef55a5ee38daa677625c1dbdf
    }
	
    // Subtract the string 2 characters from the map
    // If the count become less than 0 that means 
    // that character is occurring more number of times in string 2
    // which means they are not anagrams
    for (auto i : s2) {
        m[i]--;
<<<<<<< HEAD
<<<<<<< HEAD
		if(m[i] < 0) {
	    	return false;
		}
=======
	if(m[i] < 0) {
	    return false;
	}
>>>>>>> 422a3da41f579236f41d6f781a5982b522b9858c
=======
	if(m[i] < 0) {
	    return false;
	}
>>>>>>> 5880afa6cc953c5ef55a5ee38daa677625c1dbdf
    }
	
    return true;
}

int main()	
{
    string str1 = "spar";
    string str2 = "rasp";

    if (checkAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";

    return 0;
}
