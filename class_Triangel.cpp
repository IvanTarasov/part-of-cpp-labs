#include <iostream>
#include <math.h>

#define PI 3.14159265 

using namespace std;

class Triangle {
	public:		
		double sideA;
		double sideB;
		double sideC;
	
		bool IsExist(){ // существует ли треугольник
			if((sideA + sideB > sideC) and (sideA + sideC > sideB) and (sideC + sideB > sideA)){
				return true;
			}
			else{
				return false;
			}
		}
		
		void SidesLength(){ // выводит длинны сторон треуголника
			cout << "a = " << sideA << endl;
			cout << "b = " << sideB << endl;
			cout << "c = " << sideC << endl;
		}
		
		double * Angles(){ //  возвращает углы треугольника (если он существует)
			double * arr = new double[3];
			arr[0] = 0;
			arr[1] = 0;
			arr[2] = 0;
			
			if(IsExist()){
				// вычисление углов
				double A = acos((sideA*sideA + sideC*sideC - sideB*sideB) / (2 * sideA * sideC)) * 180 / PI;
				double B = acos((sideA*sideA + sideB*sideB - sideC*sideC) / (2 * sideA * sideB)) * 180 / PI;
				double Y = 180 - A - B;
				
				arr[0] = A;
				arr[1] = B;
				arr[2] = Y;
			}
			else{
				cout << "Triandle does not exist!" << endl;
			}
			
			return arr;
		}
		
		double Perimeter(){ // возвращает периметр треугольника (если он существует)
			if(IsExist()){
				return sideA + sideB + sideC;
			}
			else{
				cout << "Triandle does not exist!" << endl;
				return 0;
			}
		}
		
		double Area(){ // возвращает площадь треугольника (если он существует)
			if(IsExist()){
				return 0.5 * sideA * sideC * sin(acos((sideA*sideA + sideC*sideC - sideB*sideB) / (2 * sideA * sideC)));
			}
			else{
				cout << "Triandle does not exist!" << endl;
				return 0;
			}
		}
		
		void PrintArea(){
			if(IsExist()){
				cout << "Area = " << 0.5 * sideA * sideC * sin(acos((sideA*sideA + sideC*sideC - sideB*sideB) / (2 * sideA * sideC))) << endl;
			}
			else{
				cout << "Triandle does not exist!" << endl;
			}	
		}
		
		void PrintPerimeter(){
			if(IsExist()){
				cout << "Perimeter = " << sideA + sideB + sideC << endl;;
			}
			else{
				cout << "Triandle does not exist!" << endl;
			}
		}
		void PrintAngles(){
			if(IsExist()){
				double A = acos((sideA*sideA + sideC*sideC - sideB*sideB) / (2 * sideA * sideC)) * 180 / PI;
				double B = acos((sideA*sideA + sideB*sideB - sideC*sideC) / (2 * sideA * sideB)) * 180 / PI;
				double Y = 180 - A - B;
				
				cout << "Angles = " << A << ", " << B << ", " << Y << endl;;
			}
			else{
				cout << "Triandle does not exist!" << endl;
			}
		}
};

class RightTriangle{
	public:
		double sideA;
		double sideB;
		double sideC;
		
		bool IsRight(){ // пр€моугольный ли треугольник
			if((sideA*sideA + sideB*sideB == sideC*sideC) or (sideA*sideA + sideC*sideC == sideB*sideB) or (sideC*sideC + sideB*sideB == sideA*sideA)){
				return true;
			}
			else{
				return false;
			}
		}
		
		double Hypotenuse(){
			if(IsRight()){
				double max = sideA;
				if(sideB > max) max = sideB;
				if(sideC > max) max = sideC;
				
				return max;
			}
			else{
				cout << "Triandle does not right!" << endl;
				return 0;
			}
		}
};

int main(){
	setlocale(LC_ALL, "russian");
	
	int M;
		
	cout << "M = "; cin >> M;
	Triangle triangles[M];
	
	double averageS = 0;
	for(int i = 0; i < M; i++){
		cout << "“–≈”√ќЋ№Ќ»  " << i+1 << endl;
		
		cout << " a = "; cin >> triangles[i].sideA;
		cout << " b = "; cin >> triangles[i].sideB;
		cout << " c = "; cin >> triangles[i].sideC;
		
		averageS += triangles[i].Area();
	}

	averageS = averageS / M;
	cout << "—редн€€ площадь = " << averageS << endl;
	cout << endl;
	
	int D;
	
	cout << "D = "; cin >> D;
	RightTriangle rtriangles[D];
	
	double maxHyp = 0;
	int index = 0;
	for(int i = 0; i < D; i++){
		cout << "“–≈”√ќЋ№Ќ»  " << i+1 << endl;
		
		cout << " a = "; cin >> rtriangles[i].sideA;
		cout << " b = "; cin >> rtriangles[i].sideB;
		cout << " c = "; cin >> rtriangles[i].sideC;
		
		if(rtriangles[i].Hypotenuse() > maxHyp){
			maxHyp = rtriangles[i].Hypotenuse();
			index = i;
		} 
	}
	
	cout << "Ќаибольша€ гипотенуза у треугольника " << index+1<< ", где: " << endl;;
	cout << " a = " << rtriangles[index].sideA << endl;
	cout << " b = " << rtriangles[index].sideB << endl;
	cout << " c = " << rtriangles[index].sideC << endl;
	
	cout << end;
	int ti;
	cout << "¬ведите номер треугольника: ";
	cin >> ti;
	
	cout << "“реугольник " << ti << ": " << endl;
	cout << " ѕлощадь: " << triangles[ti-1].Area() << endl;
	cout << " ѕериметр: " << triangles[ti-1].Perimeter() << endl;
	cout << " ”глы: " << endl;
	
	double * arr = triangles[ti-1].Angles();
	for(int i = 0; i < 3; i++){
		cout << "  1) " << arr[i] << endl;
	}
	return 0;
}
































