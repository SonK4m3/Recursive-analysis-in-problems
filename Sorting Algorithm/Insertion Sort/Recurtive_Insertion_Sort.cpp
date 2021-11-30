#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	// Base case
	if(n <= 1)
		return;
	
	insertionSort(arr, n - 1);
	
	int last = arr[n - 1];
	int j = n - 2;
	
	while(j >= 0 && arr[j] > last){
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = last;
}

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {6, 3, 5, 9, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertionSort(arr, n);
	
	printArray(arr, n);
	
	return 0;  
}
