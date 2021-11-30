#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void RecursiveBubbleSort(int arr[], int n){
	if(n <= 1)
		return;
	
	for(int i = 0; i < n - 1; i++){
		if(arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);
	}
	
//	print(arr, n);
	
	RecursiveBubbleSort(arr, n - 1);
}

void IterativeBubbleSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[i]){
				swap(arr[i], arr[j]);	
			}
		}
	}
}

int main(){
	int arr[] = {9, 3, 2, 4, 5, 1, 6, 8, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
//	IterativeBubbleSort(arr, n);
	
	RecursiveBubbleSort(arr, n);
	
	print(arr, n);
}
