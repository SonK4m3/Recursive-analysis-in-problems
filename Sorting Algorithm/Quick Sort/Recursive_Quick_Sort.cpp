#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int Lomuto_partition(int arr[], int l, int r){
	// chon phan tu cuoi cung lam chot
	int pivot = arr[r];
	int i = l - 1;
	for(int j = l; j < r; j ++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	
	// dua chot ve giua
	swap(&arr[i + 1], &arr[r]);
	return i + 1;	// tra ve vi tri 
}


int Hoare_partition(int arr[], int l, int r){
	// chon phan tu ben trai lam chot
	int pivot = arr[l];
	int i = l - 1, j = r + 1;
	while(true){
		do{
			i ++;
		}while(arr[i] < pivot);
		
		do{
			j --;
		}while(arr[j] > pivot);
		
		if(i < j)
			swap(arr[i], arr[j]);
		else 
			return j;
	}
}

void QuickSort(int arr[], int l, int r){
	if(l < r){
		int pi = Lomuto_partition(arr, l, r);
//		int pi = Hoare_partition(arr, l, r);
		
		QuickSort(arr, l, pi - 1);
		
		QuickSort(arr, pi + 1, r);
	}
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {10, 3, 2, 4, 5, 1, 6, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print(arr, n);
	
	QuickSort(arr, 0, n - 1);
	cout << "Mang sau khi sap xep:\n";
	print(arr, n);
}
