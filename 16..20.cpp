
#include <iostream>
using namespace std;
//16...20

float read() {
	float a;
	cout << "enter the a " << endl;
	cin >> a ;
	return a;
}
float cal(float a) {
	const float pi = 3.14;
	float area =(pi*pow(a,2))/4;
	return area;
}
void print(float area) {
	cout << area;
}

int main()
{
	float a;
	
	print(cal(read()));

}
