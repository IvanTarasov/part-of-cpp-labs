#include <iostream>
#include <string>
using namespace std;


void SortOnColsEqvElem(int ** arr, const int ROWS, const int COLS){
	int s[ROWS]; // кол-во одинаковых элементов в каждой строке
	int n[ROWS][COLS]; // сколько раз повторяется каждый элемент массива
	
	
	for(int i = 0; i < ROWS; i++){ // обнуление s, n
		s[i] = 0;
		for(int j = 0; j < COLS; j++){
			n[i][j] = 0;
		}
	}
	
    for (int i = 0; i < ROWS; i++) { // подсчет кол-во одинаковых элементов в i строке
    	
        for (int j = 0; j < COLS; j++) // подсчет повторений каждого элемента i строки
            for (int k = 0; k < COLS; k++)
                if (arr[i][j] == arr[i][k])
                    n[i][j]++;
                    
        int maxCount = 0; // кол-во одинаковых элементов в строке
        
        for (int j = 0; j < COLS; j++)
            if (n[i][j] > maxCount)
                maxCount = n[i][j];
                
        s[i] = maxCount;
    }
	
	
    for (int k = 1; k < ROWS; k++) { // сортировка пузырьком строк массива
    	for(int i = 1; i < ROWS; i++){
    		if(s[i] < s[i-1]){
    			for(int j = 0; j < COLS; j++){
    				int val = arr[i][j];
    				arr[i][j] = arr[i-1][j];
    				arr[i-1][j] = val;
				}
				
				int val = s[i];
				s[i] = s[i-1];
				s[i-1] = val;
			}
		}
    }
}

void SortOnColsEqvElem(float ** arr, const int ROWS, const int COLS){
	int s[ROWS]; // кол-во одинаковых элементов в каждой строке
	int n[ROWS][COLS]; // сколько раз повторяется каждый элемент массива
	
	
	for(int i = 0; i < ROWS; i++){ // обнуление s, n
		s[i] = 0;
		for(int j = 0; j < COLS; j++){
			n[i][j] = 0;
		}
	}
	
    for (int i = 0; i < ROWS; i++) { // подсчет кол-во одинаковых элементов в i строке
    	
        for (int j = 0; j < COLS; j++) // подсчет повторений каждого элемента i строки
            for (int k = 0; k < COLS; k++)
                if (arr[i][j] == arr[i][k])
                    n[i][j]++;
                    
        int maxCount = 0; // кол-во одинаковых элементов в строке
        
        for (int j = 0; j < COLS; j++)
            if (n[i][j] > maxCount)
                maxCount = n[i][j];
                
        s[i] = maxCount;
    }
	
	
    for (int k = 1; k < ROWS; k++) { // сортировка пузырьком строк массива
    	for(int i = 1; i < ROWS; i++){
    		if(s[i] < s[i-1]){
    			for(int j = 0; j < COLS; j++){
    				float val = arr[i][j];
    				arr[i][j] = arr[i-1][j];
    				arr[i-1][j] = val;
				}
				
				int val = s[i];
				s[i] = s[i-1];
				s[i-1] = val;
			}
		}
    }
}

void SortOnColsEqvElem(double ** arr, const int ROWS, const int COLS){
	int s[ROWS]; // кол-во одинаковых элементов в каждой строке
	int n[ROWS][COLS]; // сколько раз повторяется каждый элемент массива
	
	
	for(int i = 0; i < ROWS; i++){ // обнуление s, n
		s[i] = 0;
		for(int j = 0; j < COLS; j++){
			n[i][j] = 0;
		}
	}
	
    for (int i = 0; i < ROWS; i++) { // подсчет кол-во одинаковых элементов в i строке
    	
        for (int j = 0; j < COLS; j++) // подсчет повторений каждого элемента i строки
            for (int k = 0; k < COLS; k++)
                if (arr[i][j] == arr[i][k])
                    n[i][j]++;
                    
        int maxCount = 0; // кол-во одинаковых элементов в строке
        
        for (int j = 0; j < COLS; j++)
            if (n[i][j] > maxCount)
                maxCount = n[i][j];
                
        s[i] = maxCount;
    }
	
	
    for (int k = 1; k < ROWS; k++) { // сортировка пузырьком строк массива
    	for(int i = 1; i < ROWS; i++){
    		if(s[i] < s[i-1]){
    			for(int j = 0; j < COLS; j++){
    				double val = arr[i][j];
    				arr[i][j] = arr[i-1][j];
    				arr[i-1][j] = val;
				}
				
				int val = s[i];
				s[i] = s[i-1];
				s[i-1] = val;
			}
		}
    }
}


int FirstPositiveRow(int ** arr, const int ROWS, const int COLS){ // первый столбец положительных элементов (c нуля)
	int answer = -1;                                             // если таких нет, то возвращает -1
	
	for(int j = 0; j < COLS; j++){
		int kPos = 0;
		
		for(int i = 0; i < ROWS; i++){
			if(arr[i][j] > 0){
				kPos++;
			}
		}
		
		if(kPos == ROWS){
			answer = j;
			break;
		}
	}
	
	return answer;
}

int FirstPositiveRow(float ** arr, const int ROWS, const int COLS){ // первый столбец положительных элементов (c нуля)
	int answer = -1;                                             // если таких нет, то возвращает -1
	
	for(int j = 0; j < COLS; j++){
		int kPos = 0;
		
		for(int i = 0; i < ROWS; i++){
			if(arr[i][j] > 0){
				kPos++;
			}
		}
		
		if(kPos == ROWS){
			answer = j;
			break;
		}
	}
	
	return answer;
}

int FirstPositiveRow(double ** arr, const int ROWS, const int COLS){ // первый столбец положительных элементов (c нуля)
	int answer = -1;                                             // если таких нет, то возвращает -1
	
	for(int j = 0; j < COLS; j++){
		int kPos = 0;
		
		for(int i = 0; i < ROWS; i++){
			if(arr[i][j] > 0){
				kPos++;
			}
		}
		
		if(kPos == ROWS){
			answer = j;
			break;
		}
	}
	
	return answer;
}

int main(){
	setlocale(LC_ALL, "Russian"); 
	
	while(true){
		string type; // тип данных массива
		
		cout << "Введите тип данных массива (int, float, double): ";
		cin >> type;
		
		if(type == "int"){
			
			int cols, rows;
			cout << "Строк: "; cin >> rows;
			cout << "Столбцов: "; cin >> cols;
			const int COLS = cols;
			const int ROWS = rows;
			
			int ** arr = new int*[ROWS];
			for(int i = 0; i < COLS; i++){
				arr[i] = new int[COLS];
			}
			
			// ввод массива
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << "arr[" << i <<"][" << j << "] = ";
					cin >> arr[i][j];
				}
			}
			
			
			// вывод массива
			cout << "Полученый массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			
			cout << "Первый положительный столбец: " << FirstPositiveRow(arr, ROWS, COLS) << " (с нуля) "<< endl;
			SortOnColsEqvElem(arr, ROWS, COLS);
			
			// вывод отсортированного массива
			cout << "Отсортированный массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
		}
		else if(type == "float"){
			
			int cols, rows;
			cout << "Строк: "; cin >> rows;
			cout << "Столбцов: "; cin >> cols;
			const int COLS = cols;
			const int ROWS = rows;
			
			float ** arr = new float*[ROWS];
			for(int i = 0; i < COLS; i++){
				arr[i] = new float[COLS];
			}
			
			// ввод массива
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << "arr[" << i <<"][" << j << "] = ";
					cin >> arr[i][j];
				}
			}
			
			
			// вывод массива
			cout << "Полученый массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			
			cout << "Первый положительный столбец: " << FirstPositiveRow(arr, ROWS, COLS) << " (с нуля) "<< endl;
			SortOnColsEqvElem(arr, ROWS, COLS);
			
			// вывод отсортированного массива
			cout << "Отсортированный массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
		}
		else if(type == "double"){
			
			int cols, rows;
			cout << "Строк: "; cin >> rows;
			cout << "Столбцов: "; cin >> cols;
			const int COLS = cols;
			const int ROWS = rows;
			
			double ** arr = new double*[ROWS];
			for(int i = 0; i < COLS; i++){
				arr[i] = new double[COLS];
			}
			
			// ввод массива
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << "arr[" << i <<"][" << j << "] = ";
					cin >> arr[i][j];
				}
			}
			
			
			// вывод массива
			cout << "Полученый массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			
			cout << "Первый положительный столбец: " << FirstPositiveRow(arr, ROWS, COLS) << " (с нуля) "<< endl;
			SortOnColsEqvElem(arr, ROWS, COLS);
			
			// вывод отсортированного массива
			cout << "Отсортированный массив" << endl;		
			for(int i = 0; i < ROWS; i++){
				for(int j = 0; j < COLS; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
		}
		else{
			cout << "НЕИЗВЕСТНЫЙ ТИП" << endl;
		}
		
	}
	return 0;
}
