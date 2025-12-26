#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
/*int read(string mess) {
	int num;
	do {
		cout << mess << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
int  revers(int num) {
	int x = num;
	int res = 0, number = 0;
	while (num != 0) {
		res = num % 10;
		num /= 10;
		number = number * 10 + res;
	}
	return number;
}
bool ispli(int number) {
	return number == revers(number);
}
void InvertedPattern() {
	for (int i =65 ; i <=90; i++)
	{
		for (int j = 65; j <=i; j++)
		{
			for (int k = 65; k<=j; k++)
			{
				cout << char(k);
			}
			cout << endl;
		}
		cout << endl;
	}
}
void printll() {//3 for llooopsي لثلاث احرف الاولى بتثبت الاول والثانية للثاني والثالثة نفس الاش 
	string word = "";
	for (int i = 65; i <=90; i++)
	{
		for (int  j= 65;  j <=90; j++)
		{
			for (int  k = 65; k <=90; k++)
			{
				word += char(i);//عشان يثبت الاول 
				word += char(j);//يثبت الثاني  
				word += char(k);//يغيّر احتمالات الثالث
				cout<<word << endl;
				word = "";//لازم ارجعها فاضيو ولا بلزقن كلهن ببعض للمالانهاية
			}
		}
		cout << endl;

	}
}*/
string reads() {
	string pass="";
	cout << "enterr text:"<<endl;
	getline(cin, pass);
	return pass;
}
bool guss(string pass) {
	string word;
	int count = 0;
	for (int i = 65; i <=90; i++)
	{
		for (int j=65; j <=90; j++)
		{
			for (int k = 65; i <=90; k++)
			{
				    count++;
					word += char(i);
					word += char(j);
					word += char(k);
					cout << "Trial [" << count << "]:" << word << endl;
					if (word == pass) {
						cout << "the pass is" << word;
						cout << count;
						return true;//toout from all loops but break just from inside llop
					}
					word = "";
					
			}

		}
	}
}
string encry(string text, short en){//تشفيرررر
	for (int i = 0; i < text.length(); i++)
	{
		text[i] = char((int)text[i] + en);
	}
	return text;
}
string decryption(string text, short en) {//فك التشفير
	for (int i = 0; i < text.length(); i++)
	{
		text[i] = char((int)text[i] - en);
	}
	return text;
}
int rand(int from, int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}
enum enrand { small =1 , cap = 2, spec = 3, dig = 4 };
char randchar(enrand en) {
	switch (en) {
	case enrand::small:
		return (char)rand(97, 122);
	case enrand::cap:
		return char(rand(65, 90));
	case enrand::spec:
		return char(rand(33, 47));
	case enrand::dig:
		return char(rand(48, 57));
	}
}

int main()
{
	//time_t now;
	srand((unsigned)time(NULL));// لو حطيتوو في غير المين رح يضل نفس الرقمم,,,,بس مرة وحدة بحطه وفي الميييننن
	cout << randchar(enrand::cap) << endl;
	cout << randchar(enrand::small) << endl;
	cout << randchar(enrand::dig) << endl;
	cout << randchar(enrand::spec) << endl;











	/*short enc = 2;
	string text = reads();
	cout << encry(text, 2);
	cout << endl;
	cout << decryption(encry(text,2), 2);*/
	//guss(reads());

	//InvertedPattern();//مثللث//
  //printll();
	/*if (ispli(read("enter number")))
		cout << "pli";
	else
		cout << "nottt";*/


}
