#include <bits/stdc++.h>
using namespace std;


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


int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Given arrays
    vector<int> arr1 = {4, 2, 3, 7, 2}, arr2 = {1, 3, 4, 3, 1, 10};

    //Function Call
    printUnion(arr1, arr2);

    return 0;
}