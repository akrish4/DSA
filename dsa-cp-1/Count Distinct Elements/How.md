## Count Distinct Elements: Implementation

### Method 1: Brute Force

```c++
 
#include <iostream> 
using namespace std; 

int countDistinct(int arr[], int n) 
{ 
	int res = 1; 

  for (int i = 1; i < n; i++) { 
		int j = 0; 
		for (j = 0; j < i; j++) 
			if (arr[i] == arr[j]) 
				break; 

		if (i == j) 
			res++; 
	} 
	return res; 
} 

int main() 
{ 
	int arr[] = { 10, 5, 4, 9, 120, 4, 10 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << countDistinct(arr, n); 
	return 0; 
} 

```

#### Output:
<pre>
5
</pre>

### Method 2: Using Sorting

```c++

#include <algorithm> 
#include <iostream> 
using namespace std; 

int countDistinct(int arr[], int n) 
{ 
	sort(arr, arr + n); 

	int res = 0; 
	for (int i = 0; i < n; i++) { 
		while (i < n - 1 && arr[i] == arr[i + 1]) 
			i++; 
		res++; 
	} 

	return res; 
} 

int main() 
{ 
	int arr[] = { 10, 5, 4, 9, 120, 4, 10 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << countDistinct(arr, n); 
	return 0; 
} 

```

#### Output:
<pre>
5
</pre>

### Method 3: Using Hashing

```c++

#include <bits/stdc++.h> 
using namespace std; 

int countDistinct(int arr[], int n) 
{ 
	unordered_set<int> s; 

	int res = 0; 
	for (int i = 0; i < n; i++) { 
		if (s.find(arr[i]) == s.end()) { 
			s.insert(arr[i]); 
			res++; 
		} 
	} 

	return res; 
} 

int main() 
{ 
	int arr[] = { 10, 5, 4, 9, 120, 4, 10 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << countDistinct(arr, n); 
	return 0; 
} 

```

#### Output:
<pre>
5
</pre>

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>
