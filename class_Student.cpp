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
		// ������ �����������
		Student(){ 
			FIO = "Ivanov Ivan Ivanovich";
			course = 1;
			gender = "man";
			for(int i = 0; i < 10; i++){
				grades[i] = 5;
			}
		}
		// ������ �����������
		Student(string fio, int c, string gend, int grad []){
			FIO = fio;
			course = c;
			gender = gend;
			for(int i = 0; i < 10; i++){
				grades[i] = grad[i];
			}
		}
		
		// �������
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
		
		// �������
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
		
		// ����� ������� ���������� � ��������
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
		
		// ����� ���������� ������� ������ ��������
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
	// ������ �������� � ������ � �������
	
	// ������ �����������
	Student st1;
	st1.PrintInfo();
	cout << endl;
	
	// ������ ����������
	string fio, gend;
	int c;
	int grad[10];
	
	cout << "��� (��� ��������): "; cin >> fio;
	cout << "����: "; cin >> c;
	cout << "���: "; cin >> gend;
	for(int i = 0; i < 10; i++){
		cout << "������ " << i+1 << ": ";
		cin >> grad[i];
	}
	
	Student st(fio, c, gend, grad);
	
	// ����� ����� � ������� ��������
	cout << endl;
	cout << "���: " << st.GetFIO() << endl;
	cout << "����: " << st.GetCourse() << endl;
	cout << "���: " << st.GetGender() << endl;
	cout << "������: ";
	int * gr = st.GetGrades();
	for(int i = 0; i < 10; i++){
		cout << gr[i] << "; ";
	}
	cout << endl;
	cout << endl;
	
	// ���� ����� � ������� ��������
	cout << "��� (��� ��������): "; cin >> fio;
	st.SetFIO(fio);
	
	cout << "����: "; cin >> c;
	st.SetCourse(c);
	
	cout << "���: "; cin >> gend;
	st.SetGender(gend);
	
	for(int i = 0; i < 10; i++){
		cout << "������ " << i+1 << ": ";
		cin >> grad[i];
	}
	st.SetGrades(grad);
	
	// ������������� �������
	cout << endl;
	st.PrintInfo();
	cout << endl;
	cout << " ������� ������: " << st.AverageGrade() << endl;
	
	return 0;
}











