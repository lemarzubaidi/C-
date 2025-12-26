#include <iostream>
#include<cstdlib>
using namespace std;
/*int read(string mess) {
	int num;
	do {
		cout << mess << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
void readarr(int arr[100],int&length) {
	cout << "what array length:" << endl;
	cin >> length;
	for (int i = 0; i <length; i++)
	{
		cout << "number[" << i + 1 << "]:";
		cin >> arr[i];

	}
}
void printarray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}
}
int frq(int arr[100], int length, int num) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (num == arr[i])
			count++;
	}
	return count;
}*/
int read(string mess) {
	int num;
	do {
		cout << mess << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
int randnum(int from, int to) {
	int randnum = rand() % (to - from + 1) + from;
	return randnum;
}
void raedarray1(int arr[100], int length) {
	
	for (int  i = 0; i < length; i++)
	{
		arr[i] = randnum(1, 100);
	}
}
void raedarray2(int arr[100], int length) {
	
	for (int i = 0; i < length; i++)
	{
		arr[i] = randnum(1, 100);
	}
}
void print(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i]<<"  ";
	}
}
/*int min(int arr[100], int length) {
	int min = arr[0];
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
int sum(int arr[100], int length) {
	int sum = 0;
	for (int i = 0; i < length;  i++)
	{
		sum += arr[i];
	}
	return sum;
}
float avg(int arr[100], int length) { 
	return(float)sum(arr, length) / length;
		
}*/
/*enum enprime { prime = 1, notprime = 2 };
enprime check(int num) {
	int m = round(num / 2);
	for (int i = 2; i <= m; i++)
	{
		if (num % i == 0)
			return enprime::notprime;
	}
	return enprime::prime;
}

 void copyarray(int arr2[100], int arr[100], int length1,int& length2) {
	int count = 0;
	for (int i = 0; i < length1; i++)
	{
		if (check(arr[i])==enprime::prime)
		{
			arr2[count] = arr[i];//انتبهي هون لاوم يكون لينجث مش اي
			count++;//لانه هتفرق الاي عن اللينجث
		}
	}
	 length2=count;//دكتور وقتها قللها بواح عشان يعدّل الاندكس لانه الاندكس دايما اقل من اللينجث بواحد
}*/
void sumarray(int arr3[100], int arr1[100], int arr2[100], int length) {
	for (int i = 0; i < length; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << " ";
	}
}
int main()
{
	//srand((unsigned)time(NULL));
	int arr[100],arr2[100], length1,arr3[100];
	length1 = read("enter pos number:\n");
	raedarray1(arr, length1);
	raedarray2(arr2, length1);

	//copyarray(arr2,arr, length1,length2);
	print(arr, length1);
	cout << endl;
	print(arr2, length1);
	cout << endl;
	sumarray(arr3, arr, arr2, length1);
	
	











	/*int arr[100], length, number;
	readarr(arr, length);

	number = read("enter the number:");
	printarray(arr, length);
	cout << endl;
	cout<<frq(arr, length, number);*/
}
