#include <iostream>
using namespace std;

int CoutSredArifRows(int ** mass, int n, int m, int val){
	int k = 0;
	
	for(int i = 0; i < n; i++){
		int sum = 0;
		
		for(int j = 0; j < m; j++){
			sum += mass[i][j];
		}
		
		int sred = sum / m;
		
		if(sred < val) k++;
	}
	
	return k;
}

int CoutSredArifRows(float ** mass, int n, int m, float val){
	int k = 0;
	
	for(int i = 0; i < n; i++){
		float sum = 0;
		
		for(int j = 0; j < m; j++){
			sum += mass[i][j];
		}
		
		float sred = sum / m;
		
		if(sred < val) k++;
	}
	
	return k;
}

int CoutSredArifRows(double ** mass, int n, int m, double val){
	int k = 0;
	
	for(int i = 0; i < n; i++){
		double sum = 0;
		
		for(int j = 0; j < m; j++){
			sum += mass[i][j];
		}
		
		double sred = sum / m;
		
		if(sred < val) k++;
	}
	
	return k;
}

void RestView(int ** mass, int n){
	for(int i = 1; i < n; i++){
		for(int k = i; k < n; k++){
			for(int j = n-1; j >= 0; j--){
				if(mass[k][i-1] != 0 and mass[i-1][i-1] != 0 and mass[i-1][j] != 0){
					mass[k][j] -= mass[k][i-1] / mass[i-1][i-1] * mass[i-1][j];
				}
			}
		}
	}
}

void RestView(float ** mass, int n){
	for(int i = 1; i < n; i++){
		for(int k = i; k < n; k++){
			for(int j = n-1; j >= 0; j--){
				if(mass[k][i-1] != 0 and mass[i-1][i-1] != 0 and mass[i-1][j] != 0){
					mass[k][j] -= mass[k][i-1] / mass[i-1][i-1] * mass[i-1][j];
				}
			}
		}
	}
}

void RestView(double ** mass, int n){
	for(int i = 1; i < n; i++){
		for(int k = i; k < n; k++){
			for(int j = n-1; j >= 0; j--){
				if(mass[k][i-1] != 0 and mass[i-1][i-1] != 0 and mass[i-1][j] != 0){
					mass[k][j] -= mass[k][i-1] / mass[i-1][i-1] * mass[i-1][j];
				}
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример использования функций
	// для матрицы и val(значения) можно использовать int, float, double
	 
	int n, m;
	cout << "строк: "; cin >> n;
	cout << "столбцов: "; cin >> m;
	
	
	float ** mass = new float*[n];
	for(int i = 0; i < n; i++){
		mass[i] = new float[m];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << "mass[" << i << "][" << j << "] = ";
			cin >> mass[i][j];
		}
	}
	
	cout << "полученная матрица" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	float val;
	cout << "Значение: "; cin >> val;
	cout << "Кол-во строк соответствующих условию: " << CoutSredArifRows(mass, n, m, val) << endl;
	
	
	RestView(mass, n);
	cout << endl << "преобразованная матрица" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
