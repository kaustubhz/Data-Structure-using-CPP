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

template<class T>
void bubbleSort(T arr[], int n)  
{  
    for (int i = 0; i < n-1; i++)     
    // Last i elements are already in place  
    for (int j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1]);  
}  
  

int main()  
{  
    int arr[10] = {69,25,5,22,11,55,33,43,88,2};  
    bubbleSort(arr, 10);  
    cout << "Bubble Sorted array: \n";  
    printArray(arr, 10);  
    return 0;  
}  