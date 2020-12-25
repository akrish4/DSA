#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target,flag=0;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter all elements of array in a sorted order"<<endl;// You can sort the array by your own if the input is not sorted. The complexity will be O(nlogn) in that case
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target";
    cin>>target;
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]+arr[j]<target)//if the sum is less than target, increment the right pointer
        {
            i++;
        }
        else if(arr[i]+arr[j]>target)//if the sum is greater than target, decrement the left pointer.
        {
            j--;
        }
        else//if the sum is equal to the target print the pair and break from the loop.
        {
            cout<<"The pair is: "<<arr[i]<<" "<<arr[j]<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)//if flag is 0 no pair is found
    {
        cout<<"No such pair found"<<endl;
    }
    return 0;
}
