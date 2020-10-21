#include <iostream>
using namespace std;

int ** har_sort(int ** arr, int r, int c){	
	for(int k = 1; k < c; k++){	
		int predHar = 0;
		for(int i = 0; i < r; i++){
			if(arr[i][0] < 0 and (arr[i][0] * -1) % 2 != 0 ){
				predHar += arr[i][0] * -1;
			}
		}	
		
		for(int j = 1; j < c; j++){
			int newHar = 0;
			for(int i = 0; i < r; i++){
				if(arr[i][j] < 0 and (arr[i][j] * -1) % 2 != 0 ){
					newHar += arr[i][j] * -1;
				}
			}
			
			if(newHar < predHar){
				for(int i = 0; i < r; i++){
					int val = arr[i][j-1];
					arr[i][j-1] = arr[i][j];
					arr[i][j] = val;
				}
			}
			else{
				predHar = newHar;
			}
		}				
	}
	return arr;
}

double ** har_sort(double ** arr, int r, int c){	
	for(int k = 1; k < c; k++){	
		double predHar = 0;
		for(int i = 0; i < r; i++){
			if(arr[i][0] < 0 and ((int)arr[i][0] * -1) % 2 != 0 ){
				predHar += arr[i][0] * -1;
			}
		}	
		
		for(int j = 1; j < c; j++){
			double newHar = 0;
			for(int i = 0; i < r; i++){
				if(arr[i][j] < 0 and ((int)arr[i][j] * -1) % 2 != 0 ){
					newHar += arr[i][j] * -1;
				}
			}
			
			if(newHar < predHar){
				for(int i = 0; i < r; i++){
					double val = arr[i][j-1];
					arr[i][j-1] = arr[i][j];
					arr[i][j] = val;
				}
			}
			else{
				predHar = newHar;
			}
		}				
	}
	return arr;
}

float ** har_sort(float ** arr, int r, int c){	
	for(int k = 1; k < c; k++){	
		float predHar = 0;
		for(int i = 0; i < r; i++){
			if(arr[i][0] < 0 and ((int)arr[i][0] * -1) % 2 != 0 ){
				predHar += arr[i][0] * -1;
			}
		}	
		
		for(int j = 1; j < c; j++){
			float newHar = 0;
			for(int i = 0; i < r; i++){
				if(arr[i][j] < 0 and ((int)arr[i][j] * -1) % 2 != 0 ){
					newHar += arr[i][j] * -1;
				}
			}
			
			if(newHar < predHar){
				for(int i = 0; i < r; i++){
					float val = arr[i][j-1];
					arr[i][j-1] = arr[i][j];
					arr[i][j] = val;
				}
			}
			else{
				predHar = newHar;
			}
		}				
	}
	return arr;
}

void summ(int ** arr, int r, int c){
	for(int j = 0; j < c; j++){
		
		bool test = false;
		int summ = 0;
		
		for(int i = 0; i < r; i++){
			summ += arr[i][j];
			if(arr[i][j] < 0){
				test = true;
			}
		}
		
		if(test){
			cout << "Столбец с отр. элем. - " << j << "; сумма = " << summ << endl;
		}
	}
}

void summ(double ** arr, int r, int c){
	for(int j = 0; j < c; j++){
		
		bool test = false;
		double summ = 0;
		
		for(int i = 0; i < r; i++){
			summ += arr[i][j];
			if(arr[i][j] < 0){
				test = true;
			}
		}
		
		if(test){
			cout << "Столбец с отр. элем. - " << j << "; сумма = " << summ << endl;
		}
	}
}

void summ(float ** arr, int r, int c){
	for(int j = 0; j < c; j++){
		
		bool test = false;
		float summ = 0;
		
		for(int i = 0; i < r; i++){
			summ += arr[i][j];
			if(arr[i][j] < 0){
				test = true;
			}
		}
		
		if(test){
			cout << "Столбец с отр. элем. - " << j << "; сумма = " << summ << endl;
		}
	}
}

int main(){
	setlocale(LC_ALL, "russian");
	
	// пример программы для нескольких типов матрицы
	int r, c;
	cout << "МАТРИЦА INT" << endl; 
	cout << "Строк: "; cin >> r;
	cout << "Столбцов: "; cin >> c;
	
	int ** arrInt = new int*[r];
	for(int i = 0; i < r; i++){
		arrInt[i] = new int[c];
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << "arrInt[" << i << "][" << j << "] = ";
			cin >> arrInt[i][j];
		}
	}
	
	cout << "Введенная матрица: " << endl;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arrInt[i][j] << " ";
		}
		cout << endl;
	}
	summ(arrInt, r, c);
	
	
	arrInt = har_sort(arrInt, r, c);
	cout << "Отсортированная матрица: " << endl;
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arrInt[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	cout << "МАТРИЦА DOUBLE" << endl; 
	cout << "Строк: "; cin >> r;
	cout << "Столбцов: "; cin >> c;
	
	double ** arrdouble = new double*[r];
	for(int i = 0; i < r; i++){
		arrdouble[i] = new double[c];
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << "arrdouble[" << i << "][" << j << "] = ";
			cin >> arrdouble[i][j];
		}
	}
	
	cout << "Введенная матрица: " << endl;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arrdouble[i][j] << " ";
		}
		cout << endl;
	}
	summ(arrdouble, r, c);
	
	arrdouble = har_sort(arrdouble, r, c);
	cout << "Отсортированная матрица: " << endl;
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arrdouble[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}















