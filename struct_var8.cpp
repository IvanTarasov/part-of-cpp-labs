#include <iostream>
using namespace std;

struct Interval{
	public:
		int first;
		int second;
		
		bool rangecheck(int num){
			if(num >= first && num < second){
				return true;
			}
			else{
				return false;
			}
		}
};

Interval make_Interval(int f, int s){
	if(s < f){
		cout << "Неверные параметры" << endl;
		system("pause");
	}
}

int main(){
	setlocale(LC_ALL, "russian");
	
	// пример программы
	int f, s;
	cout << "first = "; cin >> f;
	cout << "second = "; cin >> s;
	
	Interval interval = make_Interval(f, s);
	
	int num;
	cout << "Введите число: "; cin >> num;
	
	if(interval.rangecheck(num)){
		cout << "Принадлежит интервалу" << endl;
	}
	else{
		cout << "Не принадлежит интервалу" << endl;
	}
	
	return 0;
}
























































