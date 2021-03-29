#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n)
{
  int k = arr[0]; /// finding maximum element in the given array
  for(int i = 0;i<n;i++)
  {
    k = max(k, arr[i]);
  }
  int count[10] = {0};  /// taking the count array
  for(int i = 0;i<n;i++)
  {
    count[arr[i]]++;
  }

  for(int i=1;i<=k;i++)  /// modifying the count array
  {
    count[i] = count[i-1]+count[i];
  }

  int output[n];           /// output array
  for(int i = n-1;i>=0;i--)
  {
    output[--count[arr[i]]] = arr[i];
  }

  for(int i = 0;i<n;i++)
  {
    arr[i] = output[i];
  }

}

void printArray(int arr[],int n)
{
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i]<< " ";
  }
  cout<<endl;
}

int main()
 {
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  countSort(arr,n);
  cout<<"\nSorted Array: \n";
  printArray(arr,n);
  return 0;

}
