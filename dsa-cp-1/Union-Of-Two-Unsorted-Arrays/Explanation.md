## Find union of two unsorted arrays 🙇‍♀️

* Given two unsorted arrays we have to find the union of these arrays
* Union of two arrays means there should be no repating elements in the resulting array
* Example arr1 = {4, 2, 3, 7, 2} arr2 = {1, 3, 4, 3, 1, 10} union = {1, 2, 3, 4, 7, 10}

### Algorithm 🔰 
▶️ Create a hashmap mapping int to int <br>
▶️ Iterate over first array and insert the elements to map <br>
▶️ Now, iterate over second array and again insert the elements to map <br>
▶️ Now, iterate over map and print the key values which will be the union of the arrays <br>
▶️ Time complexity : O(m+n) (where m is length of first array and n is length of second array)

### Implementation 🔰 
```c++

void printUnion(vector<int> arr1, vector<int> arr2) {
    //Hashmap
    map<int, int> m;

    //Iterating over first array
    for (int i : arr1) {
        m[i]++;
    }

    //Iterating over second array
    for (int i : arr2) {
        m[i]++;
    }

    //Printing the Union
    for (auto i : m) {
        cout << i.first << " ";
    }
    cout << "\n";
}

```


<h3 align="center"> Contributed by <a href="https://github.com/KunalMahato11">Kunal Mahato</a> With ❤️.</h3>

