#include <iostream>
#include <string>
using namespace std;
bool swapped;
void bubbleSort(int arr[],int n)
{
    for(int i = n-1;i>=0;i--)
    {
        swapped = false;
        for(int j = 0;j<i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false)
        break;
    }

}

void displayArray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
    cout<<"\n";
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

bubbleSort(arr,n);
cout<<"\nSorted Array is : \n"<<endl;
displayArray(arr,n);
return 0;
}

///        Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

///        Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

///        Auxiliary Space: O(1)
