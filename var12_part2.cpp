#include <iostream>
using namespace std;

int n, m;

int OnePositiveElementRow(int ** arr, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] > 0){
				return i;
			}
		}
	}
	
	return -1;
}

int OnePositiveElementRow(float ** arr, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] > 0){
				return i;
			}
		}
	}
	
	return -1;
}

int OnePositiveElementRow(double ** arr, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] > 0){
				return i;
			}
		}
	}
	
	return -1;
}

double ** Tighten_Matrix(double ** arr){
	int rows = 0;
	int cols = 0;
	
	int r[n], c[m];
	for(int i = 0; i < n; i++) r[i] = 1;
	for(int i = 0; i < m; i++) c[i] = 1;
	
	
	for(int i = 0; i < n; i++){
		int count = 0;
		
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == m){
			r[i] = 0;
		}
		else{
			rows++;
		}
	}
	
	for(int j = 0; j < m; j++){
		int count = 0;
		
		for(int i = 0; i < n; i++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == n){
			c[j] = 0;
		}
		else{
			cols++;
		}
	}
	
	double ** newArr = new double*[rows];
	for(int i = 0; i < rows; i++){
		newArr[i] = new double[cols];
	}
		
	int ni = 0;
	
	for(int i = 0; i < n; i++){
		int nj = 0;
		if(r[i] != 0){
			for(int j = 0; j < m; j++){
				if(c[j] != 0){
					newArr[ni][nj] = arr[i][j];
					nj++;
				}
			}
			ni++;
		}
	}
	
	n = rows;
	m = cols;
	
	return newArr;
}

float ** Tighten_Matrix(float ** arr){
	int rows = 0;
	int cols = 0;
	
	int r[n], c[m];
	for(int i = 0; i < n; i++) r[i] = 1;
	for(int i = 0; i < m; i++) c[i] = 1;
	
	
	for(int i = 0; i < n; i++){
		int count = 0;
		
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == m){
			r[i] = 0;
		}
		else{
			rows++;
		}
	}
	
	for(int j = 0; j < m; j++){
		int count = 0;
		
		for(int i = 0; i < n; i++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == n){
			c[j] = 0;
		}
		else{
			cols++;
		}
	}
	
	float ** newArr = new float*[rows];
	for(int i = 0; i < rows; i++){
		newArr[i] = new float[cols];
	}
		
	int ni = 0;
	
	for(int i = 0; i < n; i++){
		int nj = 0;
		if(r[i] != 0){
			for(int j = 0; j < m; j++){
				if(c[j] != 0){
					newArr[ni][nj] = arr[i][j];
					nj++;
				}
			}
			ni++;
		}
	}
	
	n = rows;
	m = cols;
	
	return newArr;
}

int ** Tighten_Matrix(int ** arr){
	int rows = 0;
	int cols = 0;
	
	int r[n], c[m];
	for(int i = 0; i < n; i++) r[i] = 1;
	for(int i = 0; i < m; i++) c[i] = 1;
	
	
	for(int i = 0; i < n; i++){
		int count = 0;
		
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == m){
			r[i] = 0;
		}
		else{
			rows++;
		}
	}
	
	for(int j = 0; j < m; j++){
		int count = 0;
		
		for(int i = 0; i < n; i++){
			if(arr[i][j] == 0){
				count++;
			}
		}
		
		if(count == n){
			c[j] = 0;
		}
		else{
			cols++;
		}
	}
	
	int ** newArr = new int*[rows];
	for(int i = 0; i < rows; i++){
		newArr[i] = new int[cols];
	}
		
	int ni = 0;
	
	for(int i = 0; i < n; i++){
		int nj = 0;
		if(r[i] != 0){
			for(int j = 0; j < m; j++){
				if(c[j] != 0){
					newArr[ni][nj] = arr[i][j];
					nj++;
				}
			}
			ni++;
		}
	}
	
	n = rows+1;
	m = cols+1;
	
	return newArr;
}

int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример работы с функциями
	// матрица(arr) может быть типа int, float, double
	
	cout << "Строк: "; cin >> n;
	cout << "Столбцов: "; cin >> m;
	
	int ** arr = new int*[n];
	for(int i = 0; i < n; i++){
		arr[i] = new int[m];
	}
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
		
	cout << "Полученная матрица:" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	cout << "Первая строка с положительным элементом: " << OnePositiveElementRow(arr, n, m) << endl;
	arr = Tighten_Matrix(arr);
	
	cout << endl;
	cout << "Сжатая матрица:" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
