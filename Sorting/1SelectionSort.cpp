#include<iostream>
using namespace std; 
  
template<class T>
void swapElements(T &x, T &y)  
{  
    T temp = x;  
    x = y;  
    y = temp;  
}

template<class T>
void printArray(T arr[], int size)  
{  
    for (int i=0; i < size; i++) { 
        cout << arr[i] << ", ";  
	}
    cout << endl;  
}  

template<class T>
void selectionSort(T arr[], int n)  
{  
    int minIndex;  
  
    for (int i = 0; i < n-1; i++)  
    {  
        // Find the minimum element 
        minIndex = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[minIndex]) { 
            minIndex = j;  
		}
  
        // Swap the minimum element with the first element of array  
        swap(arr[minIndex], arr[i]);  
    }  
}  
  

int main()  
{  
    int arr[10] = {69,25,5,22,11,55,33,43,88,2};  
    selectionSort(arr, 10);  
    cout << "Selection sorted array:"<<endl;  
    printArray(arr, 10);  
    return 0;  
}  