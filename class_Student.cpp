#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		string FIO;
		int course;
		string gender;
		int grades[10];
		
	public:
		// пустой конструктор
		Student(){ 
			FIO = "Ivanov Ivan Ivanovich";
			course = 1;
			gender = "man";
			for(int i = 0; i < 10; i++){
				grades[i] = 5;
			}
		}
		// полный конструктор
		Student(string fio, int c, string gend, int grad []){
			FIO = fio;
			course = c;
			gender = gend;
			for(int i = 0; i < 10; i++){
				grades[i] = grad[i];
			}
		}
		
		// геттеры
		string GetFIO(){
			return FIO;
		}
		int GetCourse(){
			return course;
		}
		string GetGender(){
			return gender;
		}
		int * GetGrades(){
			return grades;
		}
		
		// сеттеры
		void SetFIO(string fio){
			FIO = fio;
		}
		void SetCourse(int c){
			course = c;
		}
		void SetGender(string gend){
			gender = gend;
		}
		void SetGrades(int grad[]){
			for(int i = 0; i < 10; i++){
				grades[i] = grad[i];
			}
		}
		
		// метод выводит информацию о студенте
		void PrintInfo(){
			cout << " FIO: " << FIO << endl;
			cout << " course: " << course << endl;
			cout << " gender: " << gender << endl;
			cout << " grades: ";
			for(int i = 0; i < 10; i++){
				cout << grades[i] << "; ";
			}
			cout << endl;
		}
		
		// метод возвращает среднюю оценку студента
		double AverageGrade(){
			double ag = 0;
			for(int i = 0; i < 10; i++){
				ag += grades[i];
			}
			
			return ag / 10;
		}
};

int main(){
	setlocale(LC_ALL, "russian");
	// пример создания и работы с классом
	
	// пустой конструктор
	Student st1;
	st1.PrintInfo();
	cout << endl;
	
	// полный конструкор
	string fio, gend;
	int c;
	int grad[10];
	
	cout << "ФИО (без пробелов): "; cin >> fio;
	cout << "Курс: "; cin >> c;
	cout << "Пол: "; cin >> gend;
	for(int i = 0; i < 10; i++){
		cout << "Оценка " << i+1 << ": ";
		cin >> grad[i];
	}
	
	Student st(fio, c, gend, grad);
	
	// вывод полей с помощью геттеров
	cout << endl;
	cout << "ФИО: " << st.GetFIO() << endl;
	cout << "Курс: " << st.GetCourse() << endl;
	cout << "Пол: " << st.GetGender() << endl;
	cout << "Оценки: ";
	int * gr = st.GetGrades();
	for(int i = 0; i < 10; i++){
		cout << gr[i] << "; ";
	}
	cout << endl;
	cout << endl;
	
	// ввод полей с помощью сеттеров
	cout << "ФИО (без пробелов): "; cin >> fio;
	st.SetFIO(fio);
	
	cout << "Курс: "; cin >> c;
	st.SetCourse(c);
	
	cout << "Пол: "; cin >> gend;
	st.SetGender(gend);
	
	for(int i = 0; i < 10; i++){
		cout << "Оценка " << i+1 << ": ";
		cin >> grad[i];
	}
	st.SetGrades(grad);
	
	// использование методов
	cout << endl;
	st.PrintInfo();
	cout << endl;
	cout << " Средняя оценка: " << st.AverageGrade() << endl;
	
	return 0;
}











