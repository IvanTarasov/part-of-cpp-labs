#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Product{
	private:
		string name;           // ��������
		string artikul;       // �������
		int cost;		     // ����
		string dateCreate;  // ���� ������������ � ������� "31.12.2020"
		int releasePeriod; // ���� ���������� (� ������ ������ ���������� ��������)
		
	public:
		Product(){  // ������ �����������
			name = "-";
			artikul = "-";
			cost = 0;
			dateCreate = "00.00.0000";
			releasePeriod = 0;
		}
		
		Product(string NName, string NArtikul, int NCost, string NDateCreate, int NReleasePeriod){ // ������ �����������
			name = NName;
			artikul = NArtikul;
			cost = NCost;
			dateCreate = NDateCreate;
			releasePeriod = NReleasePeriod;
		}
		
		// �������
		string GetName(){
			return name;
		}
		string GetArtikul(){
			return artikul;
		}
		int GetCost(){
			return cost;
		}
		string GetDateCreate(){
			return dateCreate;
		}
		int GetReleasePeriod(){
			return releasePeriod;
		}
		
		// �������
		void SetName(string NName){
			name = NName;
		}
		void SetArtikul(string NArtikul){
			artikul = NArtikul;
		}
		void SetCost(int NCost){
			cost = NCost;
		}
		void SetDateCreate(string NDateCreate){
			dateCreate = NDateCreate;
		}
		void SetReleasePeriod(int NReleasePeriod){
			releasePeriod = NReleasePeriod;
		}
		
		// ������ ��� ������ � ������
		void PrintData(){ // �������� �� ����� ������ ���� ����� �������
			cout << endl;
			cout << " name: " << name << endl;
			cout << " artikul: " << artikul << endl;
			cout << " cost: " << cost << endl;
			cout << " dateCreate: " << dateCreate << endl;
			cout << " releasePeriod: " << releasePeriod << endl;
			cout << endl;
		}
		
		string ReleaseDate(){ // ���������� ������ ����, �� ������� ����� ����������� �����
			int day = atoi(dateCreate.substr(0, 2).c_str());
			int mon = atoi(dateCreate.substr(3, 2).c_str());
			int year = atoi(dateCreate.substr(6, 4).c_str());
			
			mon += releasePeriod;
			while(mon > 12){
				mon -= 12;
				year++;
			}
			char d[2];
			char m[2];
			char y[4];
			
			itoa(day, d, 10);
			itoa(mon, m, 10);
			itoa(year, y, 10);
			
			string dd = d;
			string mm = m;
			string yy = y;
			
			return dd + "." + mm + "." + yy;
		}
		
};

int main(){
	setlocale(LC_ALL, "russian");
	
	// ������ ������� ������������
	Product p1;
	p1.PrintData(); // ����� ������ �� ������� � ������� ������
	
	// ������ ������� ������������
	Product p2("Book", "B-666", 990, "21.05.2012", 36);
	p2.PrintData(); // ����� ������ �� ������� � ������� ������
	
	// ��������� ������� � ������� ��������
	string n, a, d;
	int c, r;
	cout << "��������: "; cin >> n;
	cout << "�������: "; cin >> a;
	cout << "����: "; cin >> c;
	cout << "���� ������������: "; cin >> d;
	cout << "���� ���������: "; cin >> r;
	
	p1.SetName(n);
	p1.SetArtikul(a);
	p1.SetCost(c);
	p1.SetDateCreate(d);
	p1.SetReleasePeriod(r);
	
	// ����� ������ �� ������� � ������� ��������
	cout << endl;
	cout << " ��������: " << p1.GetName() << endl;
	cout << " �������: " << p1.GetArtikul() << endl;
	cout << " ����: " << p1.GetCost() << endl;
	cout << " ���� ������������: " << p1.GetDateCreate() << endl;
	cout << " ���� ���������: " << p1.GetReleasePeriod() << endl;
	cout << endl;
	
	// ������������� ������ ReleaseDate
	cout << "�� ����� ���� ��������� ����������� �����: " << p1.ReleaseDate() << endl;
	
	return 0;
}



























































