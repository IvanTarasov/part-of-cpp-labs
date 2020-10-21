#include <iostream>
using namespace std;

template <typename t>
t Summ_NeChet(t array[], int n){
	t summ = 0;
	
	for(int i = 0; i < n; i++){
		if(i % 2 != 0){
			summ += array[i];
		}
	}
	
	return summ;
}

template <typename t>
t Summ_MejduOtrElem(t array[], int n){
	t summ = 0;
	
	int j1, j2;
	for(int i = 0; i < n; i++){
		if(array[i] < 0){
			j1 = i;
			break;
		}
	}
	
	for(int i = n-1; i >= j1; i--){
		if(array[i] < 0){
			j2 = i;
			break;
		}
	}
	
	for(int i = j1+1; i < j2; i++){
		summ += array[i];
	}
	
	return summ;
}

template <typename t>
void Compression(t * array, int n){
	for(int i = 0; i < n; i++){
		t num = array[i];
		
		if(num < 0){
			num *= -1;
		}
		
		if(num <= 1){
			array[i] = 0;
		}
	}
	
	for(int k = 1; k < n; k++){
		for(int i = 0; i < n-1; i++){
			if(array[i] == 0){
				array[i] = array[i+1];
				array[i+1] = 0;
			}
		}
	}
}
int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример использования функций
	int n;
	cout << "size: ";
	cin >> n; 
	
	double array[n];
	for(int i = 0; i < n; i++){
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
	
	cout << "Сумма нечет. элементов = " << Summ_NeChet(array, n) << endl;
	cout << "Сумма между первым и последним отр. элементом = " << Summ_MejduOtrElem(array, n) << endl; 
	
	cout << "Сжатый массив" << endl;
	Compression(array, n);
	for(int i = 0; i < n; i++){
		cout << " " << array[i];
	}
	
	return 0;
}
