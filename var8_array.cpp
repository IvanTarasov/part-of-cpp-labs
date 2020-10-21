#include <iostream>
using namespace std;

template <typename T>
int minEl(T arr[] , int n)
{
    int index = 0;
    T min = arr[0];
    
    for(int i = 0; i < n; i++){
    	if(arr[i] < min){
    		min = arr[i];
    		index = i;
		}
	}
	
	return index;
}

template <typename T>
T summ(T arr[], int n){
	int e = 0;
	T summ = 0;
	
	for(int i = 0; i < n; i++){
		if(arr[i] < 0){
			e = i;
			break;
		}
	}
	
	for(int i = e + 1; i < n; i++){
		if(arr[i] < 0){
			break;
		}
		summ += arr[i];
	}
	
	return summ;
}

template <typename T>
void sort(T arr[], int n){
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			
			T val = arr[j];
			if(val < 0){
				val *= -1;
			}
			
			if(val <= 1){
				val = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = val;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	setlocale(LC_ALL, "russian");
	
	// пример программы с использованием разных типов
	int n;
	cout << "n = "; cin >> n;
	
	int arr1[n];
	double arr2[n];
	
	cout << "Целочисленный массив" << endl;
	for(int i = 0; i < n; i++){
		cout << " arr1[" << i << "] = ";
		cin >> arr1[i];
	}
	cout << "адрес минимального элемента: " << minEl(arr1, n) << endl;
	cout << "сумма между первыми отр. элементами: " << summ(arr1, n) << endl;
	cout << "отсортированный массив: ";
	sort(arr1, n);
	cout << endl;

	
	cout << "Дробный массив" << endl;
	for(int i = 0; i < n; i++){
		cout << " arr2[" << i << "] = ";
		cin >> arr2[i];
	}
	cout << "адрес минимального элемента: " << minEl(arr2, n) << endl;
	cout << "сумма между первыми отр. элементами: " << summ(arr2, n) << endl;
	cout << "отсортированный массив: ";
	sort(arr2, n);
	cout << endl;
	return 0;
}

























