#include <iostream>
using namespace std;
class clsmobile {
	//pure virtual fun, and this is an interfaces ??????? ???
	//and if we have one pure just one here thier are 3 that make abstract class and 
	//we cannot make an object from it???? ??? ???? ????????? 
	virtual void dial(string phone) = 0;
	virtual void sendsms(string phone,string text) = 0;
	virtual void takepicture() = 0;
};
class clsiphone :public clsmobile {
public:
	void dial(string phone) {

	 }
	void sendsms(string phone, string text) {

	 }
	void takepicture() {

	 }
};
class  sam :public clsmobile {
public:

	void dial(string phone) {

	 }
	void sendsms(string phone, string text) {

	 }
	void takepicture() {

	 }
};
class ggg :public clsiphone {

};
int main()
{
	//clsmobile m1;
	

}
