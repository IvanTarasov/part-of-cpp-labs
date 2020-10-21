#include <iostream>
using namespace std;

struct PairStruct{
	public:
		double first;
		int second;
		
		void Init(double f, int s){
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
			double a = 1;
			
			for(int i = 0; i < second; i++)
				a *= first;
			
			return a;
		}
};

PairStruct make_PairStruct(double first, int second){
	PairStruct ps;
	
	ps.Init(first, second);
	
	return ps;
}

int main(){
	
	double f; 
	int s;
	
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

















