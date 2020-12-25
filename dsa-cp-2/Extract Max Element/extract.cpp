#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100000];

int parent(int i)
{
    if (i & 1)
        return i / 2;
    else
        return i / 2 - 1;
}

int leaf(int i)
{
    if (i >= n)
        return 1;
    return 0;
}

void heap_down(int i)
{
    int l = 2 * i + 1, r = l + 1, maxi = i;

    if (leaf(l))
        return;

    if (arr[l] > arr[i])
        maxi = l;

    if (!leaf(r) && arr[r] > arr[maxi])
        maxi = r;

    if (maxi != i)
    {
        swap(arr[i], arr[maxi]);
        heap_down(maxi);
    }
}

void heap_up(int i)
{
    if (!i)
        return;

    int p = parent(i);

    if (arr[p] < arr[i])
    {
        swap(arr[i], arr[p]);
        heap_up(p);
    }
}

void insert(int val)
{
    if (n >= 100000)
    {
        cout << "No more space in heap\n";
        return;
    }
    arr[n] = val;
    heap_up(n);
    n++;
}

int extractMax()
{
    int max = arr[0];
    arr[0] = arr[n - 1];
    n--;
    heap_down(0);
    return max;
}

int main()
{
    insert(5);
    insert(3);
    insert(6);
    insert(1);
    insert(2);
    insert(4);
    cout << extractMax() << "\n";
    cout << extractMax() << "\n";
    cout << extractMax() << "\n";
    cout << extractMax() << "\n";
    cout << extractMax() << "\n";

    return 0;
}