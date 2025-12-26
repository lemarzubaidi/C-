#include <iostream>
using namespace std;
//fun overloading polymuephisim
/*double MySum(double a, double b) {
	return (a + b);
}
int MySum(int a, int b) {
	return (a + b);
}

int MySum(int a, int b, int c) {
	return (a + b + c);
}
int MySum(int a, int b, int c, int d)
{
	return (a + b + c + d);
}*/
//call hierarchy/stack
/*void fun2();
void koko() {
	cout << "hi" << endl;
}
void fun3() {
	koko();
}
void fun2() {
	fun3();
}
void fun1() {
	fun2();
	koko();
}*/
//recursion
/*void PrintNumber(int N, int M) {
	if (N <= M) {
		cout << N << endl;
		PrintNumber(N + 1, M);
	}
}
void ReversPrintNumber(int n, int m) {
	if (n <=  m) {
		cout << m << endl;
		ReversPrintNumber(n, m-1);
	}
}
int fc = 1;
int Power(int n, int m,int k) {
	if (k <= m) {
			fc *= n;
		Power(n, m, k + 1);
	}
	return fc;
}
int MyPower(int base, int power) {
	if (power == 0)
		return 1;
	else
		return (base * MyPower(base, power - 1));
}*/
void MyFun() {
	static int num = 1;
	cout << "val of number:" << num << endl;
	num++;
}
int main()
{
	//cout << MySum(10, 20) << endl;
	//cout << MySum(10.1, 20.3) << endl;
	//cout << MySum(10, 20,30) << endl;
	//cout << MySum(10, 20,30,40) << endl;
	//fun1();
	//ReversPrintNumber(1, 10);
	//cout << endl;
	//cout<<MyPower(2, 4);
	//MyFun();
	//MyFun();
//MyFun();
	/*auto x = 10;
	auto y = 20.4;
	auto z = "lemarzubaide";
	cout << x << '\n' << y << '\n' << z << endl;*/


}

