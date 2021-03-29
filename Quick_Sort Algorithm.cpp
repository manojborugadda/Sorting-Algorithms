#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
  int pivot  = arr[high];
  int i = (low-1);
  for(int j = low;j<=high-1;j++)
  {
    if(arr[j] < pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
   swap(arr[i+1],arr[high]);
   return i+1;
}
void quicksort(int arr[], int low,int high)
{
    if(low<high)
    {
      int p = partition(arr,low,high);

    quicksort(arr, low, p-1);
    quicksort(arr,p+1,high);
    }
}

void printArray(int arr[],int size)
{
  for(int i = 0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  quicksort(arr,0,n-1);
  cout<<"\nSorted Array is :\n";
  printArray(arr,n);
  return 0;
}
