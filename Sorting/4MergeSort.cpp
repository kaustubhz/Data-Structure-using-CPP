#include<iostream>
using namespace std; 
  
template<class T>
void printArray(T arr[], int size)  
{  
    for (int i=0; i < size; i++) { 
        cout << arr[i] << ", ";  
	}
    cout << endl;  
}  


//Merge sub-array
template<class T>
void merge(T arr[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create two arrays */
    int left[n1], right[n2]; 
  
    /* Copy data to temp arrays left[] and right[] */
    for (i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        right[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0; // Start index of first subarray 
    int j = 0; // Start index of second subarray 
    int k = l; // Start index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (left[i] <= right[j]) 
        { 
            arr[k] = left[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of left[]*/
    while (i < n1) 
    { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of right[]*/
    while (j < n2) 
    { 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
} 
  

/* l is for left index and r is right index */
template<class T>
void mergeSort(T arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        //Find out mid
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  

int main()  
{  
    int arr[10] = {69,25,5,22,11,55,33,43,88,2};  
    mergeSort(arr, 0, 10 - 1);  
    cout << "Heap sorted array:"<<endl;  
    printArray(arr, 10);  
    return 0;  
}  