#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int l, int m, int r){
	vector<int> right(arr + l, arr + m + 1);
	vector<int> left(arr + m + 1, arr + r + 1);
	
	int i = 0, j = 0;
	while(i < right.size() && j < left.size()){
		if(right[i] <= left[j]){
			arr[l] = right[i];
			l ++; i ++;
		}
		else{
			arr[l] = left[j];
			l ++; j ++;
		}
	}
	
	while(i < right.size()){
		arr[l] = right[i];
		i ++; l ++;
	}
	
	while(j < left.size()){
		arr[l] = left[j];
		j ++; l ++;
	}
}

void MergeSort(int arr[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		MergeSort(arr, l , m);
		MergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {5, 3, 2, 1, 7, 6, 9, 10, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print(arr, n);
	
	MergeSort(arr, 0, n - 1);
	cout << "Mang sau khi sap xep:\n";
	print(arr, n);
}
