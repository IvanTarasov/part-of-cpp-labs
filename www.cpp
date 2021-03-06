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
			char * ch;
			string str = ch;
			itoa(CostCalculation(), ch, 10);
			return str;
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
	
	g1.EditPrice()
	cout << "Price: " << g1.ToString();
	
	g1.IncreaseQuantityOfGoods(10);
	g1.DecreaseQuantityOfGoods(5);
	
	g1.Display();
	
	return 0;
}














