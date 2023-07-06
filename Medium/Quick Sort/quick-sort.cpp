//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
     void quickSort(int arr[], int low, int high)
    {
        if(low<high){

           //p is the correct position of the pivot
            int p=partition(arr,low,high);

  //performing recursive call on the left array part
            quickSort(arr,low,p-1);

//performing recursive call on the left array part
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
       while(i<j){

//find a value from left which is greater than pivot
           while(arr[i]<=pivot && i<=high-1){
               i++;
            }

//finding a value from right smaller than pivot
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
       }
       swap(arr[low],arr[j]);
       return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends