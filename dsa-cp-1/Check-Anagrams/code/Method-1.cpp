#include <bits/stdc++.h>
using namespace std;

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
