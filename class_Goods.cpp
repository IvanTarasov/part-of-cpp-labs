#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Goods{
	public:
		string name;              // ������������
		string date;             // ���� ����������� �� �����
		int price;              // ����
		int quantityOfGoods;   // ���������� �� ������
		string invoiceNumber; // ����� ���������
		
		void Init(){
			name = "none";
			date = "00.00.0000";
			price = 0;
			quantityOfGoods = 0;
			invoiceNumber = "000000";
		}
		
		void Read(){
			cout << " name: "; cin >> name;
			cout << " date: "; cin >> date;
			cout << " price: "; cin >> price;
			cout << " quantity of goods: "; cin >> quantityOfGoods;
			cout << " invoice number: "; cin >> invoiceNumber;
		}
		
		void Display(){
			cout << "name: " << name << endl;
			cout << "date: " << date << endl;
			cout << "price: " << price << endl;
			cout << "quantity of goods: " << quantityOfGoods << endl;
			cout << "invoice number: " << invoiceNumber << endl;
		}
		
		string ToString(){
			char c[16];
			itoa(CostCalculation(), c, 10);
			return c;
		}
		
		int CostCalculation(){  // ������� ���������
			return price * quantityOfGoods;
		}
		
		void EditPrice(){ // ��������� ����
			cout << " new price: "; cin >> price;
		}
		
		void IncreaseQuantityOfGoods(int howMuch){ // ���������� ���������� ������
			quantityOfGoods += howMuch;
		}
		
		void DecreaseQuantityOfGoods(int howMuch){ // ���������� ���������� ������
			quantityOfGoods -= howMuch;
			
			if (quantityOfGoods < 0){
				quantityOfGoods = 0;
			}
		}
		
};

int main(){
	Goods g1;
	g1.Init();
	g1.Read();
	
	cout << endl;
	g1.EditPrice();
	g1.IncreaseQuantityOfGoods(10);
	g1.DecreaseQuantityOfGoods(5);
	
	cout << "cost: " << g1.ToString() << endl;
	cout << endl;
	
	g1.Display();
	
	return 0;
}














