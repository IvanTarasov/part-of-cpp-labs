#include <iostream>
#include <string>
using namespace std;

int NotNullColsCount(int ** mass, int rows, int cols){
	int k = 0;
	
	for(int j = 0; j < cols; j++){
		int notnull = 0;
		for(int i = 0; i < rows; i++){
			if(mass[i][j] != 0){
				notnull++;
			}
		}
		
		if(notnull == rows){
			k++;
		}
	}
	
	return k;
}

int NotNullColsCount(double ** mass, int rows, int cols){
	int k = 0;
	
	for(int j = 0; j < cols; j++){
		int notnull = 0;
		for(int i = 0; i < rows; i++){
			if(mass[i][j] != 0){
				notnull++;
			}
		}
		
		if(notnull == rows){
			k++;
		}
	}
	
	return k;
}

int NotNullColsCount(float ** mass, int rows, int cols){
	int k = 0;
	
	for(int j = 0; j < cols; j++){
		int notnull = 0;
		for(int i = 0; i < rows; i++){
			if(mass[i][j] != 0){
				notnull++;
			}
		}
		
		if(notnull == rows){
			k++;
		}
	}
	
	return k;
}

void SortCharact(int ** mass, int rows, int cols){
	int c[rows];
	
    for (int i = 0; i < rows; i++) {
    	int sum = 0;
    	for(int j = 0; j < cols; j++){
    		if(mass[i][j] % 2 == 0 and mass[i][j] > 0){
    			sum += mass[i][j];
			}
		}
		
		c[i] = sum;
    }
	
	
    for (int k = 1; k < rows; k++) {
    	for(int i = 1; i < rows; i++){
    		if(c[i] < c[i-1]){
    			for(int j = 0; j < cols; j++){
    				int val = mass[i][j];
    				mass[i][j] = mass[i-1][j];
    				mass[i-1][j] = val;
				}
				
				int val = c[i];
				c[i] = c[i-1];
				c[i-1] = val;
			}
		}
    }
}

void SortCharact(double ** mass, int rows, int cols){
	int c[rows];
	
    for (int i = 0; i < rows; i++) {
    	double sum = 0;
    	for(int j = 0; j < cols; j++){
    		if(int(mass[i][j]) % 2 == 0 and mass[i][j] > 0 and mass[i][j] - int(mass[i][j]) == 0){
    			sum += mass[i][j];
			}
		}
		
		c[i] = sum;
		
    }
	
	
    for (int k = 1; k < rows; k++) {
    	for(int i = 1; i < rows; i++){
    		if(c[i] < c[i-1]){
    			for(int j = 0; j < cols; j++){
    				double val = mass[i][j];
    				mass[i][j] = mass[i-1][j];
    				mass[i-1][j] = val;
				}
				
				int val = c[i];
				c[i] = c[i-1];
				c[i-1] = val;
			}
		}
    }
}
void SortCharact(float ** mass, int rows, int cols){
	int c[rows];
	
    for (int i = 0; i < rows; i++) {
    	float sum = 0;
    	for(int j = 0; j < cols; j++){
    		if(int(mass[i][j]) % 2 == 0 and mass[i][j] > 0 and mass[i][j] - int(mass[i][j]) == 0){
    			sum += mass[i][j];
			}
		}
		
		c[i] = sum;
    }
	
	
    for (int k = 1; k < rows; k++) {
    	for(int i = 1; i < rows; i++){
    		if(c[i] < c[i-1]){
    			for(int j = 0; j < cols; j++){
    				float val = mass[i][j];
    				mass[i][j] = mass[i-1][j];
    				mass[i-1][j] = val;
				}
				
				int val = c[i];
				c[i] = c[i-1];
				c[i-1] = val;
			}
		}
    }
}

int main(){
	setlocale(LC_ALL, "Russian");
	
	int rows, cols;
	cin >> rows;
	cin >> cols;
	
	double ** mass = new double*[rows];
	for(int i = 0; i < rows; i++){
		mass[i] = new double[cols];
	}
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "mass[" << i <<"][" << j << "] = ";
			cin >> mass[i][j];
		}
	}
	
	cout << "ОТВЕТ: " << NotNullColsCount(mass, rows, cols) << endl;
	SortCharact(mass, rows, cols);
	
	cout << "Отсортированный массив" << endl;		
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
