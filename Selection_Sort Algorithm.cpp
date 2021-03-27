#include <iostream>
#include <string>
using namespace std;
void selectionSort(int arr[],int n)
{
    int i,j,small;
    for(i = 0 ; i < n-1 ; i++)
    {
         small = i;
        for(j = i+1 ; j < n ; j++)
        {
            if(arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap(arr[small],arr[i]);
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

selectionSort(arr,n);
cout<<"\nSorted Array is : \n"<<endl;
displayArray(arr,n);
return 0;
}


///Time Complexity: O(n*n) as there are two nested loops.

/// Auxiliary Space: O(1)
