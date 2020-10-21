#include <iostream>
#include <string>
using namespace std;

template <typename num>
int NegativeNumCount( num arr[], const int SIZE){ // шаблон функции для подсчета отр. элементов массива
	int k = 0;
	
	for(int i = 0; i < SIZE; i++){
		if(arr[i] < 0){
			k++;
		}
	}
	
	return k;
}

template <typename num>
num SumModAfterMinNum( num arr[], const int SIZE){ // шаблон функции для подсчета суммы модулей после минимального элемента массива
	// определение адреса минимального элемента
	num min = arr[0];
	int minIndex = 0;
	
	for(int i = 0; i < SIZE; i++){
		if(arr[i] < min){
			min = arr[i];
			minIndex = i;
			break;
		}
	}
	
	// подсчет суммы модулей после минимального элемента
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
void SqrReplAndSort(num *arr, const int SIZE){ // замена квадратами и сортировка + вывод на экран
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
		string type; // тип данных массива
		
		cout << "Введите тип данных массива (int, float, double): ";
		cin >> type;
		
		if(type == "int"){
			
			int size;
			cout << "Размер массива: ";
			cin >> size;
			const int SIZE = size;
			
			int arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "Кол-во отриц. элементов массива: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "Сумма модулей после минимального элемента: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else if(type == "float"){
			int size;
			cout << "Размер массива: ";
			cin >> size;
			const int SIZE = size;
			
			float arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "Кол-во отриц. элементов массива: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "Сумма модулей после минимального элемента: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else if(type == "double"){
			int size;
			cout << "Размер массива: ";
			cin >> size;
			const int SIZE = size;
			
			double arr[SIZE];
			
			for(int i = 0; i < SIZE; i++){
				cout << "arr[" << i <<"] = ";
				cin >> arr[i];
			}
			
			cout << endl;
			cout << "Кол-во отриц. элементов массива: " << NegativeNumCount(arr, SIZE) << endl;
			cout << "Сумма модулей после минимального элемента: " << SumModAfterMinNum(arr, SIZE) << endl;
			cout << endl;
			
			SqrReplAndSort(arr, SIZE);
		}
		else{
			cout << "НЕВЕРНЫЙ ТИП!" << endl;
		}
	}
	
	return 0;
}	







