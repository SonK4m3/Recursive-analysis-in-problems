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

int MinIndex(int arr[], int i, int j){
	if(i == j)
		return i;
	
	int k = MinIndex(arr, i + 1, j);
	
	return (arr[i] < arr[k]) ? i : k;
}

void RecursiveSelectionSort(int arr[], int n, int index = 0){
	if(index == n)
		return;
	
	int k = MinIndex(arr, index, n - 1);
	
	if(k != index)
		swap(arr[index], arr[k]);
	
//	print(arr, n);
	
	RecursiveSelectionSort(arr, n, index + 1);
}

void SelectionSort(int arr[], int n){
	
	for(int i = 0; i < n - 1; i++){
		int imin = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[imin]){
				imin = j;	
			}
		}
		if(imin != i)
			swap(arr[i], arr[imin]);
	}
}



int main(){
	int arr[] = {9, 3, 2, 4, 5, 1, 6, 8, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
//	SelectionSort(arr, n);
	
	RecursiveSelectionSort(arr, n);
	
	print(arr, n);
}
