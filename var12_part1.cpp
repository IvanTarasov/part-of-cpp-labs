#include <iostream>
using namespace std;

template <typename t>
int Max_Mod_Index(t arr[], int n){
	t maxMod = arr[0];
	int index = 0;
	
	if(maxMod < 0){
		maxMod *= -1;
	}
	
	for(int i = 1; i < n; i++){
		t mod = arr[i];
		if(mod < 0){
			mod *= -1;
		}
		
		if(mod > maxMod){
			maxMod = mod;
			index = i;
		}
	}
	
	return index;
}

template <typename t>
t Summ_After_First_Positive_Num(t arr[], int n){
	t summ = 0;
	int posIndex = n;
	
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			posIndex = i;
			break;
		}
	}
	
	for(int i = posIndex+1; i < n; i++){
		summ += arr[i];
	}
	
	return summ;
}

template <typename t>
void Edit_Array(t * arr, int n, int a, int b){
	t * m1 = new t[n];
	t * m2 = new t[n];
	
	int l1 = 0;
	int l2 = 0;
	
	for(int i = 0; i < n; i++){
		int num = int(arr[i]);
		
		if(num >= a and num <= b){
			m1[l1] = arr[i];
			l1++;
		}
		else{
			m2[l2] = arr[i];
			l2++;
		}
	}
	
	int j = 0;
	for(int i = 0; i < l1; i++){
		arr[j] = m1[i];
		j++;
	}
	
	for(int i = 0; i < l2; i++){
		arr[j] = m2[i];
		j++;
	}
}


int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример работы с функциями
	// массив(arr) может быть типа int, float, double
	
	int n;
	cout << "Длинна массива: "; cin >> n;
	
	double arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	
	cout << "Номер максимального по модулю элемента: " <<  Max_Mod_Index(arr, n) << endl;
	cout << "Сумма после первого положительного элемента: " << Summ_After_First_Positive_Num(arr, n) << endl;
	
	cout << endl;
	int a, b;
	
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	
	Edit_Array(arr, n, a, b);
	
	cout << "Измененный массив: " << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
		
	return 0;
}





























