#include <iostream>
using namespace std;

int func(double ** D, int size){
	double average, summ;
	int k, answer;
	
	k = 0;
	answer = 0;
	for(int i = 1; i < size; i++){
		for(int j = 0; j < i; j++){
			summ += D[i][j];
			k++;
		}
	}
	average = summ / k;
	
	for(int i = 0; i < size; i++){
		if(D[i][i] < average){
			answer++;
		}
	}
	
	return answer;
}

int main(){
	setlocale(LC_ALL, "russian");
	
	while(true){
		int size;
		cout << "РАЗМЕР МАТРИЦЫ: "; cin >> size;
		if(size % 2 == 0){
			cout << "У матрицы нет диагонали!" << endl;
			continue;
		}
		cout << endl;
		
		double ** D = new double*[size];
		for(int i = 0; i < size; i++){
			D[i] = new double[size];
		}
		
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				cout << "D[" << i << "][" << j << "] = ";
				cin >> D[i][j];
			}
		}
		cout << endl;
		
		cout << "   D[" << size << "][" << size << "]" << endl;
		cout << endl;
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				cout << D[i][j];	
			}
			cout << endl;
		}
		cout << endl;
		
		int answer = func(D, size);
		cout << "Ответ: " << answer << endl;
		cout << endl;
		
		char exit;
		cout << "Закрыть программу? (y/n)" << endl;
		cin >> exit;
		
		if(exit == 'y') break;
	}
	
	return 0;
}
