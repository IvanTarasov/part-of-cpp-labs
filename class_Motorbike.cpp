#include <iostream>
#include <string>
using namespace std;

class Motorbike{
	private:
		string name;
		string color;
		int tag;
		int wheels;
		double maxspeed;
		int god_vipuska;
		
	public:
		Motorbike(){
			name = "none";
			color = "none";
			tag = 0;
			wheels = 0;
			maxspeed = 0;
			god_vipuska = 2020;
		}
		
		Motorbike(string n, string c, int t, int w, double m, int g){
			name = n;
			color = c;
			tag = t;
			wheels = w;
			maxspeed = m;
			god_vipuska = g;
		}
		
		string GetName(){
			return name;
		}
		string GetColor(){
			return color;
		}
		int GetTag(){
			return tag;
		}
		int GetWheels(){
			return wheels;
		}
		double GetMaxspeed(){
			return maxspeed;
		}
		int GetGod_vipuska(){
			return god_vipuska;
		}
		
		void SetName(string n){
			name = n;
		}
		void SetColor(string c){
			color = c;
		}
		void SetTag(int t){
			tag = t;
		}
		void SetWheels(int w){
			wheels = w;
		}
		void SetMaxspeed(double m){
			maxspeed = m;
		}
		void SetGod_vipuska(int g){
			god_vipuska = g;
		}
		
		void PrintData(){
			cout << " name = " << name << endl;
			cout << " color = " << color << endl;
			cout << " tag = " << tag << endl;
			cout << " wheels = " << wheels << endl;
			cout << " maxspeed = " << maxspeed << endl;
			cout << " god_vipuska = " << god_vipuska << endl;
		}
		
		int GetAge(){
			return 2020 - god_vipuska;
		}		
};

int main(){
	setlocale(LC_ALL, "russian");

	Motorbike m1;
	m1.PrintData();
	cout << endl;
	
	Motorbike m2("honda", "red", 666, 2, 248, 2012);
	m2.PrintData();
	cout << endl;
	
	int t, w, g;
	string n, c;
	double m;
	
	cout << "Название = "; cin >> n;
	cout << "Цвет = "; cin >> c;
	cout << "Номер = "; cin >> t;
	cout << "Колеса = "; cin >> w;
	cout << "Макс. скорость = "; cin >> m;
	cout << "Год выпуска = "; cin >> g;
	
	m1.SetName(n);
	m1.SetColor(c);
	m1.SetTag(t);
	m1.SetWheels(w);
	m1.SetMaxspeed(m);
	m1.SetGod_vipuska(g);
	
	cout << " name = " << m1.GetName() << endl;
	cout << " color = " << m1.GetColor() << endl;
	cout << " tag = " << m1.GetTag() << endl;
	cout << " wheels = " << m1.GetWheels() << endl;
	cout << " maxspeed = " << m1.GetMaxspeed() << endl;
	cout << " god_vipuska = " << m1.GetGod_vipuska() << endl;
	
	cout << endl;
	cout << " Возраст мотоцикла: " << m1.GetAge() << endl;
	
	return 0;
	
}







































