#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[j], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array is: " << endl;
    for(int i=0;i<n;i++)
        cout << arr[i] << "\t";

    bubbleSort(arr, n);

    cout << "\nSorted array is:\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << "\t";

    return 0;
}
