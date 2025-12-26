
#include <iostream>
# include <string>
using namespace std;
// 6....10
/*struct info {
	string firstname;
	string lastname;
};*/
/*info read() {
	info info;
	cout << "enter your first name" << endl;
	cin >> info.firstname;
	cout << "enter your last name:"<<endl;
	cin >> info.lastname;
	return info;
}
string get(info in,bool revers)   {
	string full=" ";
	if(revers)
		 full = in.lastname + " " + in.firstname;
	else
	 full = in.firstname+" " + in.lastname;
	return full;

}
void print(string full) {
	cout << full;
}//لازم تجزاي كل اشي فرق تسد*/
/*int read() {
	int number;
	cout << "enter your number:" << endl;
	cin >> number;
	return number;
}
float half(int num) {
	return(float)num / 2;
}
void print(int num) {
	string result = "half of" + to_string(num) + "is" + to_string(half(num));
	cout << result;
}*/
/*enum enpassfail { pass = 1, fail = 2 };
int read() {
	int num;
	cout << "enter your mark:"<<endl;
	cin >> num;
	return num;
}
enpassfail check(int num) {
	if (num >=50 )
		return enpassfail::pass;
	else
		return enpassfail::fail;
}
void print(int num) {
	if (check(num) == enpassfail::pass)
		cout << "you pass";
	else
		cout << "you fail";
}*/
void read(int& num1, int& num2, int& num3) {
	cout << "your number:" << endl;
	cin >> num1 >> num2 >> num3;
}
int sum(int num1, int num2, int num3) {
	return num1+num2+num3;
	
}
float avrag(int num1, int num2, int num3) {
	return (float)(sum(num1, num2, num3)/3);

}
void print(float total) {
	cout << total;
}
int main()
{
	int num1, num2, num3;
	read(num1, num2, num3);
	print(avrag(num1, num2, num3));

	//print(get(read(),1));
	//print(read());
	//print(read());



}

