### Check whether two strings are anagram of each other 🙇

<<<<<<< HEAD
-   Lets first understand what are anagrams. An anagram is a word or phrase formed by rearranging the letters in another word or phrase, such as spar, formed from rasp.

-   In this problem we will check whether the strings which are given is anagram of each other or not.
=======
▶️ Lets first understand what are anagrams. An anagram is a word or phrase formed by rearranging the letters in another word or phrase, such as spar, formed from rasp.

▶️ In this problem we will check whether the strings which are given is anagram of each other or not.
>>>>>>> 422a3da41f579236f41d6f781a5982b522b9858c

```
1️⃣ Method

▶️ First sort the given strings
▶️ Then compare the strings if they are same then return true or else fasle
▶️ Time complexity : O(nlogn)
```

```c++

bool checkAnagram(string s1, string s2)
{
    // If length of both strings is not same, then they
    // cannot be anagram
    if (s1.length() != s2.length())
        return false;

    // Sort both the strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (s1[i] != s2[i])
            return false;

    return true;
}
```

```
2️⃣ Method

▶️ Create a hashmap mapping char to int.
▶️ Store the characters count of string 1 in the hashmap.
<<<<<<< HEAD
▶️ Now subtract the character count of string 2 from hashmap, If the count of the character becomes less than 0 that means that character is occurring more number of times in string 2.
▶️ Therefore the two strings are not anagrams of each other return false.
▶️ Time complexity : O(n)
=======
▶️ Now subtract the character count of string 2 from hashmap, If the count of the character becomes less than 0 that means that character is occurring more number of times in string 2. 
▶️ Therefore the two strings are not anagrams of each other return false.
▶️ Time complexity : O(n) 
>>>>>>> 422a3da41f579236f41d6f781a5982b522b9858c
```

```c++

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    // HashMap to store the count of each character
    map<char, int> m;
<<<<<<< HEAD

    // Insert string 1 character into map
    for (auto i : s1) {
	    m[i]++;
    }

    // Subtract the string 2 characters from the map
    // If the count become less than 0 that means
    // that character is occurring more number of   times in string 2
    // which means they are not anagrams
    for (auto i : s2) {
        m[i]--;
	    if(m[i] < 0) {
	        return false;
	    }
    }

=======
	
    // Insert string 1 character into map
    for (auto i : s1) {
	m[i]++;
    }
	
    // Subtract the string 2 characters from the map
    // If the count become less than 0 that means 
    // that character is occurring more number of times in string 2
    // which means they are not anagrams
    for (auto i : s2) {
        m[i]--;
	if(m[i] < 0) {
	    return false;
	}
    }
	
>>>>>>> 422a3da41f579236f41d6f781a5982b522b9858c
    return true;
}


```

<h3 align="center"> Contributed by <a href="https://github.com/KunalMahato11">Kunal Mahato</a> With ❤️.</h3>
