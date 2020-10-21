#include <iostream>
using namespace std;

int ZeroElementCount(double arr[], int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] == 0){
			count++;
		}
	}
	
	return count;
}

double SummAfterMinElement(double arr[], int size){
	double min = arr[0];
	int adres = 0;
	
	for(int i = 1; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
			adres = i;
		}
	}
	
	double summ = 0;
	for(int i = adres+1; i < size; i++){
		summ += arr[i];
	}
	
	return summ;
}

int main(){
	setlocale(LC_ALL, "russian");
	
	int n;
	cout << "������� n: "; cin >> n;
	double arr[n];
	
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	
	cout << "���-�� ��������� ������� ������ 0: " << ZeroElementCount(arr, n) << endl;
	cout << "����� ����� ������������ ��������: " << SummAfterMinElement(arr, n) << endl;
	
	return 0;
}
























