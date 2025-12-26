
#include <iostream>
#include "MYLIB.h"
#include "input.h"
using namespace std;
int readnum() {
	int num;
	cout << "enter your  number" << endl;
	cin >> num;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000,'\n');
			cout << "invalid number please enter anothee num:" << endl;
		cin >> num;
	}
	return num;
}
//fun declaration 
//?? ?????
//void add(int, int);
int sum(int a, int b,int c=0,int d=0);

int main()
{
	/*int mark = 0;

 (mark >=0) ? cout<<"positive" : cout<<"negative";
	(mark == 0)? cout << "zero" : ((mark > 0) ? cout << "positive" : cout << "neg");*/
	
	/*for (int n : { 1, 2, 3, 4 }) {
		cout << n << endl;
	}*/
	//readnum();
	//cout << (12 | 25);
	//cout << (12 & 25);
	cout<<sum(10, 20);

}

//fun defintion
//??? ???? ??? ????????? ????? ???? ????? ?????? ??? ?????? ??????? ???? ?????? ???? ?????? ?? ?? ?? ?????
int sum(int a, int b, int c , int d ) {
	return  (a + b + c + d);
}
/*void add(int a, int b) {
	cout << (a + b);
}*/

