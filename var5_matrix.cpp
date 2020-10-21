#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

double minimum(){
	int n;
	cout << "Размер матрицы: ";
	cin >> n;
	
	double ** matritsa = new double*[n];
	for(int i = 0; i < n; i++){
		matritsa[i] = new double[n];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "matritsa[" << i << "][" << j << "] = ";
			cin >> matritsa[i][j];
		}
	}
	
	cout << "Вы ввели: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << matritsa[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	double min = matritsa[0][0];
	for(int i = 1; i < n; i++){
		if(matritsa[i][i] < min){
			min = matritsa[i][i];
		}
	}
	
	return min;
}

int func(){
	srand( time(0) );
	
	int m, n;
	cout << " m = "; cin >> m;
	cout << " n = "; cin >> n;	
	int ** table = new int*[m];
	for(int i = 0; i < m; i++){
		table[i] = new int[n];
	}
	
	int c = 0;
	cout << "Полученая таблица: " << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			table[i][j] = rand() % 100;
			
			if(table[i][j] == i + j){
				c++;
			}
			
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return c;
}

int main(){
	setlocale(LC_ALL, "russian");
	
	cout << "МЕНЮ:" << endl;
	cout << "min - минимальный элемент главной диагонали" << endl;
	cout << "func - подсчет элементов таблицы, значения которых равны сумме своих индексов I+J" << endl;
	cout << "exit - выход из программы" << endl;
	while(true){
		string com;
		cout << ">>> ";
		cin >> com;
		
		if(com == "min"){
			double min = minimum();
			cout << "min = " << min << endl;
		}		
		else if(com == "func"){
			int c = func();
			cout << "Кол-во элементов: " << c << endl;
		}	
		else if(com == "exit"){
			cout << "Завершение работы..." << endl;
			break;
		}
		else{
			cout << "НЕВЕРНАЯ КОМАНДА!" << endl;
		}
	}
	
	return 0;
}


















