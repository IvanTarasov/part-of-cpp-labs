#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	
	int m = 7;
	int n = 6;
	
	double ** mat = new double*[m];
	for(int i = 0; i < m; i++){
		mat[i] = new double[n];
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "mat[" << i << "][" << j << "] = ";
			cin >> mat[i][j];
		}
	}
	
	cout << "Полученая матрица: " << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	double max = mat[1][0];
	int k = 1;
	for(int i = 1; i < m; i++){
		for(int j = 0; j < k; j++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
		}
		k++;
	}
	
	cout << "Максимальное значение ниже главной диагонали: " << max << endl;
	
	return 0;
}
