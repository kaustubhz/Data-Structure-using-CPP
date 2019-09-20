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


// To heapify a subtree rooted with node i which is an index in arr[].
template<class T>
void heapify(T arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
 
 template<class T>
void heapSort(T arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--){ 
        heapify(arr, n, i);
	}		
  
    // Extract an element one by one from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
  

int main()  
{  
    int arr[10] = {69,25,5,22,11,55,33,43,88,2};  
    heapSort(arr, 10);  
    cout << "Heap sorted array:"<<endl;  
    printArray(arr, 10);  
    return 0;  
}  