#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a,b,c;
	cout<<"Enter Lenght of side A: ";
	cin>>a;
	cout<<"Enter Lenght of side B: ";
	cin>>b;
	cout<<"Enter Lenght of side C: ";
	cin>>c;
	
	double s;
	s = (a+b+c)/2;
	
	double area;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout<<"Area of Triangle: "<<area<<endl;
	return 0;
}
