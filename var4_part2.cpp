#include <iostream>
using namespace std;

void MyltInPositiveRows(int ** array, int n){
	for(int i = 0; i < n; i++){
		bool isPos = true;
		int m = 1;
		for(int j = 0; j < n; j++){
			if(array[i][j] < 0){
				isPos = false;
				break;
			}
		}
		
		if(isPos){
			for(int j = 0; j < n; j++){
				m *= array[i][j];
			}	
			
			cout << "Строка " << i << ", произведение = " << m << endl;
		}
	}
}

void MyltInPositiveRows(float ** array, int n){
	for(int i = 0; i < n; i++){
		bool isPos = true;
		float m = 1;
		for(int j = 0; j < n; j++){
			if(array[i][j] < 0){
				isPos = false;
				break;
			}
		}
		
		if(isPos){
			for(int j = 0; j < n; j++){
				m *= array[i][j];
			}	
			
			cout << "Строка " << i << ", произведение = " << m << endl;
		}
	}
}

void MyltInPositiveRows(double ** array, int n){
	for(int i = 0; i < n; i++){
		bool isPos = true;
		double m = 1;
		for(int j = 0; j < n; j++){
			if(array[i][j] < 0){
				isPos = false;
				break;
			}
		}
		
		if(isPos){
			for(int j = 0; j < n; j++){
				m *= array[i][j];
			}	
			
			cout << "Строка " << i << ", произведение = " << m << endl;
		}
	}
}

int MaxSumm(int ** array, int n){
	int summ[(n-1)*2];
	int index = 0;
	
	int c = 1;
	
	for(int k = n-1; k > 0; k--){
		int s = 0;
		
		for(int d = 0; d < k; d++){
			int row = d;
			int col = d+c; 
		
			s += array[row][col];		
		}
		c++;
		
		summ[index] = s;
		index++;
	}
	
	c = 1;
	for(int k = n-1; k > 0; k--){
		int s = 0;
		
		for(int d = 0; d < k; d++){
			int col = d;
			int row = d+c; 
		
			s += array[row][col];		
		}
		c++;
		
		summ[index] = s;
		index++;
	}
	
	int max = summ[0];
	for(int i = 1; i < index; i++){
		if(summ[i] > max){
			max = summ[i];
		}
	}
	
	return max;
}

float MaxSumm(float ** array, int n){
	float summ[(n-1)*2];
	int index = 0;
	
	int c = 1;
	
	for(int k = n-1; k > 0; k--){
		float s = 0;
		
		for(int d = 0; d < k; d++){
			int row = d;
			int col = d+c; 
		
			s += array[row][col];		
		}
		c++;
		summ[index] = s;
		
		index++;
	}
	
	c = 1;
	for(int k = n-1; k > 0; k--){
		float s = 0;
		
		for(int d = 0; d < k; d++){
			int col = d;
			int row = d+c; 
		
			s += array[row][col];		
		}
		c++;
		summ[index] = s;
		
		index++;
	}
	
	float max = summ[0];
	for(int i = 1; i < index; i++){
		if(summ[i] > max){
			max = summ[i];
		}
	}
	
	return max;
}

double MaxSumm(double ** array, int n){
	double summ[(n-1)*2];
	int index = 0;
	
	int c = 1;
	
	for(int k = n-1; k > 0; k--){
		double s = 0;
		
		for(int d = 0; d < k; d++){
			int row = d;
			int col = d+c; 
		
			s += array[row][col];		
		}
		c++;
		
		summ[index] = s;
		index++;
	}
	
	c = 1;
	for(int k = n-1; k > 0; k--){
		double s = 0;
		
		for(int d = 0; d < k; d++){
			int col = d;
			int row = d+c; 
		
			s += array[row][col];		
		}
		c++;
		
		summ[index] = s;
		index++;
	}
	
	double max = summ[0];
	for(int i = 1; i < index; i++){
		if(summ[i] > max){
			max = summ[i];
		}
	}
	
	return max;
}

int main(){
	setlocale(LC_ALL, "Russian");
	
	// пример использования функций
	int n;
	cout << "size = "; cin >> n;
	
	float ** array = new float*[n];
	for(int i = 0; i < n; i++){
		array[i] = new float[n];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
		}
	}
	
	cout << "Введенный массив: " << endl;
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	MyltInPositiveRows(array, n);
	cout << "макс. сумма = " << MaxSumm(array, n) << endl;;
	
	return 0;
}
