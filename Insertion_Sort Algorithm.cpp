#include <iostream>
#include <string>
using namespace std;
void insertionSort(int arr[],int n)
{
    int i,j,key;
    for(i = 1 ; i < n; i++)
    {
         key = arr[i];
         j = i-1;
        while(j >= 0 && arr[j] >key)
        {
           arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void displayArray(int arr[],int n)
{
    for(int i =0;i<n;i++)
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
for(int i = 0;i<n;i++)
{
    cin>>arr[i];
}

insertionSort(arr,n);
cout<<"\nSorted Array is : \n";
displayArray(arr,n);
return 0;
}


///Time Complexity: O(n*n) as there are two nested loops.

/// Auxiliary Space: O(1)
