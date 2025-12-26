#include <iostream>
using namespace std;
//11...15
/*enum enpassfail { pass = 1, fail = 2 };
void read(int& num1,int& num2,int& num3){
	cout << "enter your number";
	cin >> num1 >> num2 >> num3;
}
int sum(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}
float avg(int num1,int num2,int num3) {
	return (float)sum(num1,num2,num3) / 3;

}
enpassfail check(float avg) {
	if (avg >= 50)
		return enpassfail::pass;
	else
		return enpassfail::fail;
}
void print(float avg) {
	if (check(avg) == enpassfail::pass) {
		cout << "pass";
	}
	else
		cout << "fail";
}*/
/*void read(int& num1, int& num2, int& num3) {
	cout << "enter the number:" << endl;
	cin >> num1 >> num2>>num3;
}
int max(int num1, int num2,int num3) {
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else
			return num3;
	else if (num2 > num3)
		return num2;
	else
		return num3;
		
}
void print(int max) {
	cout << max;
}*/
/*void read(int& num1, int& num2) {
	cout << "enter first number:" << endl;
	cin >> num1;
	cout << "enter your seconde number:" << endl;
	cin >> num2;
}
int swap(int& num1, int& num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	return num1, num2;
}
void print(int num1, int num2) {
	cout << num1 << num2;
}*/
void read(float& num1, float& num2) {
	cout << "enter your number" << endl;
	cin >> num1 >> num2;
}
float calculat(float num1, float num2) {
	return num1*num2;
}
void print(float area) {
	cout << area;
}
int main()
{
	float num1, num2;
	read(num1, num2);
	print(calculat(num1, num2));
	//read(num1, num2);
	//print(num1, num2);
	//swap(num1, num2);
	//print(num1,num2);
	//read(num1, num2,num3);
	//print(max(num1, num2,num3));
	/*int num1, num2, num3;
	read(num1, num2, num3);
	print(avg(num1, num2, num3));*/
}

