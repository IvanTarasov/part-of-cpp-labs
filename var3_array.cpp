#include <iostream>
#include <string>
using namespace std;

void sort(){
	char arr[10];
	cout << "Введите массив символов(англ.): " << endl;
	for(int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 1; i < 10; i++){
		for(int j = 1; j < 10; j++){
			if(arr[j] < arr[j-1]){
				char a = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = a;
			}
		}
	}
	
	cout << "Отсортированный массив: ";
	for(int i = 0; i < 10; i++){
		cout << arr[i];
	}
	cout << endl;
}

int summ(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	
	int summ = 0;
	for(int i = 0; i < 10; i++){
		summ += arr[i];
		if(arr[i] >= 0){
			return 1;
		}
	}
	
	return summ;
}

int main(){
	setlocale(LC_ALL, "russian");
	
	cout << "КОМАНДЫ ДЛЯ ПРОГРАММЫ" << endl;
	cout << "sort - сортировка символьного массива" << endl;
	cout << "summ - сумма элеменов отр. массива" << endl;
	cout << "out - выход из программы" << endl;
	while(true){
		string com;
		cout << ") "; cin >> com;
		
		if(com == "sort"){
			sort();
		}
		else if(com == "summ"){
			int a = summ();
			
			if(a == 1){
				cout << "Не все элементы массива отрицательны!" << endl;
			}
			else{
				cout << "Сумма = " << a << endl;
			}
		}
		else if(com == "out"){
			break;
		}
		else{
			cout << "Неизвестная команда!" << endl;
		}
	}
	
	return 0;
}













