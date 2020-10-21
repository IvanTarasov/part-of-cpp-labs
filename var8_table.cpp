#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

int summ_random_table(){
	
	srand( time(0) );
	
	int ** table = new int*[3];
	for(int i = 0; i < 3; i++){
		table[i] = new int[2];
	}
	
	int summ = 0;
	cout << "��������������� �������: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			table[i][j] = (rand() % 61) - 30;
			summ += table[i][j]*table[i][j];
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return summ;
}

int maxEl(int ** table, int r, int c){
	int max = table[0][0];
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(table[i][j] > max){
				max = table[i][j];
			}
		}
	}
	
	return max;
}

int minEl(int ** table, int r, int c){
	int min = table[0][0];
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(table[i][j] < min){
				min = table[i][j];
			}
		}
	}
	
	return min;
}

int main(){
	setlocale(LC_ALL, "russian");	
	
	cout << "�������� ��� �����:" << endl;
	cout << "summ_random_table: ������ ����� ������" << endl;
	cout << "new_table_max_min: ������ ����� ������" << endl;
	cout << "out: ����� �� ���������" << endl;
	while(true){
		string com;
		cout << "����: ";
		cin >> com;
		
		if(com == "summ_random_table"){
			int summ = summ_random_table();
			cout << "����� ��������� = " << summ << endl;
		}
		
		else if(com == "new_table_max_min"){
			int r, c;
			cout << " �����: "; cin >> r;
			cout << " ��������: "; cin >> c;
			
			int ** table = new int*[r];
			for(int i = 0; i < r; i++){
					table[i] = new int[c];
			}
			
			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					cout << "table[" << i << "][" << j << "] = ";
					cin >> table[i][j];
				}
			}
			
			cout << "��������� �������: " << endl;
			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					cout << table[i][j] << " ";
				}
				cout << endl;
			}			
			cout << endl;
			
			cout << "������������ ������� = " << maxEl(table, r, c) << endl;
			cout << "����������� ������� = " << minEl(table, r, c) << endl;
		}	
		else if(com == "out"){
			break;
		}
		else{
			cout << "�������� �������!" << endl;
		}
	}
	
	return 0;
}
























