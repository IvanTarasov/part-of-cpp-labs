#include <iostream>
#include <string>
using namespace std;

template <typename num>
int NegativeNumCount( num arr[], const int SIZE){ // ������ ������� ��� �������� ���. ��������� �������
	int k = 0;
	
	for(int i = 0; i < SIZE; i++){
		if(arr[i] < 0){
			k++;
		}
	}
	
	return k;
}

template <typename num>
num SumModAfterMinNum( num arr[], const int SIZE){ // ������ ������� ��� �������� ����� ������� ����� ������������ �������� �������
	// ����������� ������ ������������ ��������
	num min = arr[0];
	int minIndex = 0;
	
	for(int i = 0; i < SIZE; i++){
		if(arr[i] < min){
			min = arr[i];
			minIndex = i;
			break;
		}
	}
	
	// ������� ����� ������� ����� ������������ ��������
	num sum = 0;
	
	for(int i = minIndex + 1; i < SIZE; i++){
		if(arr[i] > 0){
			sum += arr[i];
		}
		else{
			sum += -1 * arr[i];
		}
	}
	
	return sum;
}

template <typename num>
void SqrReplAndSort(num *arr, const int SIZE){ // ������ ���������� � ���������� + ����� �� �����
	for(int i = 0; i < SIZE; i++){
		if(arr[i] < 0){
			arr[i] = arr[i] * arr[i];
		}
	}
	
	for(int k = 0; k < SIZE-1; k++){
	for(int i = 1; i < SIZE; i++){
		if(arr[i] < arr[i-1]){
			num val = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = val;
		}
	}}
	
	cout << "[";
	for(int i = 0; i < SIZE; i++){
		cout << " "<< arr[i];
	}
	cout << "]" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian"); 
	
	while(true){
		string type; // ��� ������ �������
		
		cout << "������� ��� ������ ������� (int, float, double): ";
		cin >> type;
		
		if(type == "int"){
			
			int size;
			cout << "������ �������: ";
			cin >> size;
			const int SIZE = size;
			
			int arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "���-�� �����. ��������� �������: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "����� ������� ����� ������������ ��������: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else if(type == "float"){
			int size;
			cout << "������ �������: ";
			cin >> size;
			const int SIZE = size;
			
			float arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "���-�� �����. ��������� �������: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "����� ������� ����� ������������ ��������: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else if(type == "double"){
			int size;
			cout << "������ �������: ";
			cin >> size;
			const int SIZE = size;
			
			double arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "���-�� �����. ��������� �������: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "����� ������� ����� ������������ ��������: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else{
			cout << "�������� ���!" << endl;
		}
	}
	
	return 0;
}	







