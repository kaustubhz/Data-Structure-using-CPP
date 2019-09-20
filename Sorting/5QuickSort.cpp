#include<iostream>
using namespace std; 
  
template<class T>
void printArray(T arr[], int size)  
{  
    for (int i=0; i < size; i++){ 
        cout << arr[i] << ", "; 
	}		
    cout << endl;  
}  


/* Steps as below
* Take last element as pivot
* place pivot element at its correct position in sorted array
* place all smaller to left of pivot and all greater elements to right of pivot 
*/
template<class T>
int partition (T arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return (i + 1);  
}  
  

//low is start index and high is end index
template<class T>
void quickSort(T arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index*/
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  

int main()  
{  
    int arr[10] = {69,25,5,22,11,55,33,43,88,2};
	quickSort(arr, 0, 10 - 1);   
    cout << "Heap sorted array:"<<endl;  
    printArray(arr, 10);  
    return 0;  
}  