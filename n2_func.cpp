#include <iostream>
using namespace std;

int function(double arr[], int size){
	int index = 0;
	double min = arr[0];
	
	for(int i = 1; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
			index = i;
		}
	}
	
	return index;
}
int main(){
	setlocale(LC_ALL, "russian");
	
	int size;
	cout << "ÐÀÇÌÅÐ ÌÀÑÑÈÂÀ: "; cin >> size;
	double arr[size];
	
	for(int i = 0; i < size; i++){
		cout << " arr[" << i << "] = ";
		cin >> arr[i];
	}
	
	cout << "Àäðåñ ìèíèìàëüíîãî ýëåìåíòà: " << function(arr, size) << endl;
	return 0;
}
