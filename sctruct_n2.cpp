#include <iostream>
#include <math.h>
using namespace std;

struct PairStruct{
	public:
		double first;
		double second;
		
		void Init(double f, double s){
			first = f;
			second = s;
		}
		
		void Read(){
			cout << " first = "; cin >> first;
			cout << " second = "; cin >> second;
		}
		
		void Display(){
			cout << " first: " << first << endl;
			cout << " second: " << second << endl;
		}
		
		double power(){
			return exp(second * log(first));
		}
};

PairStruct make_PairStruct(double first, double second){
	PairStruct ps;
	
	ps.Init(first, second);
	
	return ps;
}

int main(){
	
	double f, s; 
	
	cout << " first = "; cin >> f;
	cout << " second = "; cin >> s;
	
	PairStruct ps = make_PairStruct(f, s);
	cout << f << "^" << s << " = " << ps.power() << endl;
	
	cout << endl;
	ps.Read();
	
	cout << endl;
	ps.Display();
	cout << endl;
	
	cout << ps.first << "^" << ps.second << " = " << ps.power() << endl;
	
	return 0;
}

















