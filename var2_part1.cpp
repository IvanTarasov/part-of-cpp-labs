#include <iostream>
#include <string>
using namespace std;

template <typename n>
n SumPositiveNum(n mass[], int size){
	n sum = 0;
	for(int i = 0; i < size; i++){
		if(mass[i] > 0){
			sum += mass[i];
		}
	}
	
	return sum;
}

template <typename n>
n Umnoj_V_Itervale(n mass[], int size){
	
	int m1 = 0, m2 = 0;
	
	n max, min;
	if(mass[0] > 0){
		max = mass[0];
		min = mass[0];
	}
	else{
		max = mass[0]*(-1); 
		min = mass[0]*(-1);
	}
	
	for(int i = 0; i < size; i++){
		n num = mass[i];
		if(num < 0){
			num *= -1;
		}
		
		if(num > max){
			max = num;
			m1 = i;
		}
		
		if(num < min){
			min = num;
			m2 = i;
		}
	}
	
	n mylt = 1;
	if(m1 < m2){
		for(int i = m1+1; i < m2; i++){
			mylt *= mass[i];
		}
	}
	else{
		for(int i = m2+1; i < m1; i++){
			mylt *= mass[i];
		}
	}

	return mylt;
}

template <typename n>
void Sort(n * mass, int size){
	// сортировка
	for(int k = 0; k < size-1; k++){
		for(int i = 1; i < size; i++){
			if(mass[i] > mass[i-1]){
				n num = mass[i];
				mass[i] = mass[i-1];
				mass[i-1] = num;
			}
		}
	}
	
	// вывод
	for(int i = 0; i < size; i++){
		cout << mass[i] << " ";
	}
	cout << endl;
}

int main(){
	setlocale(LC_ALL, "Russian");
	
	// создайте и заполните массив(mass) необходимого типа и размера(size) для проверки
	// вызовите функции Umnoj_V_Itervale(), Sort() и SumPositiveNum() с необходимыми аргументами 
	
	// например
	float mass[5] = { 1.1, 2, 3, 4, 5.5 };
	int size = 5;
	
	cout << Umnoj_V_Itervale(mass, size) << endl;
	cout << SumPositiveNum(mass, size) << endl;
	Sort(mass, size);
	
	return 0;
}
