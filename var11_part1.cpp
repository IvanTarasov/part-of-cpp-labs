#include <iostream>
using namespace std;

template <typename type>
int MinModIndex(type mass[], int n){
	type min_mod;
	
	if(min_mod < 0){
		min_mod = mass[0]*-1;
	}
	else{
		min_mod = mass[0];
	}
	
	int min_mod_index = 0;
	
	for(int i = 0; i < n; i++){
		type num = mass[i];
		
		if(num < 0){
			num *= -1;
		}
		
		if(num < min_mod){
			min_mod = num;
			min_mod_index = i;
		}
	}
	
	return min_mod_index;
}

template <typename type>
type SummModAfterNegtiveElem(type mass[], int n){
	type summ = 0;
	int negative = n;
	
	for(int i = 0; i < n; i++){
		if(mass[i] < 0){
			negative = i;
			break;
		}
	}
	
	for(int i = negative+1; i < n; i++){
		type num = mass[i];
		
		if(num < 0){
			num *= -1;
		}
		
		summ += num;
	}
	
	return summ;
}

template <typename type>
void DeleteAB(type * mass, int n, type a, type b){
	for(int i = 0; i < n; i++){
		if(mass[i] >= a and mass[i] <= b){
			mass[i] = 0;
		}
	}
	
	for(int k = 1; k < n; k++){
		for(int i = 1; i < n; i++){
			if(mass[i-1] == 0){
				mass[i-1] = mass[i];
				mass[i] = 0;
			}
		}
	}
}


int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример использования функций
	// для массива, a, b можно использовать int, float, double
	
	int n;
	cout << "size mass: "; cin >> n;
	
	double mass[n];
	
	for(int i = 0; i < n; i++){
		cout << "mass[" << i << "] = "; 
		cin >> mass[i];
	}
	
	cout << endl;
	cout << "Адрес минимального по модулю элемента: " << MinModIndex(mass, n) << endl;
	cout << "Сумма модулей после первого отр. элемента: " << SummModAfterNegtiveElem(mass, n) << endl;
	cout << endl;
	
	double a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	DeleteAB(mass, n, a, b);
	cout << "Изменненый массив: " << endl;
	for(int i = 0; i < n; i++){
		cout << " " << mass[i];
	}
	
	return 0;
}
