#pragma warning(disable:4996)
#include <iostream>
#include<vector>
#include<string>
#include<cctype>
#include<fstream>
#include<ctime>
using namespace std;
/*struct stEmployee {
	string Name;
	float Salary;
};*/
/*void ReadNumber(vector <int>& vNumbers) {
	char enter= 'Y';
	int num;
	while (enter == 'Y' || enter == 'y') {
		cout << "please enter your num \n";
		cin >> num;
		vNumbers.push_back(num);
		cout << "do you want to enter again ?/n";
		cin >> enter;
	}
}
void print(vector <int>& vNumbers) {
	for (int num : vNumbers) {
		cout << num;
	}
	cout << endl;
}
void ReadEmpolyee(vector <stEmployee> & vemp){
	char enter = 'y';
	stEmployee emp;
	while(enter=='y'||enter=='Y')
	{
		cout << "enter your emplooye:\n";
		cout << "First Name:";
		cin >> emp.FirstName;
		cout << "Last Name:";
		cin >> emp.LastName;
		cout << "Salaray :";
		cin >> emp.Salary;
		vemp.push_back(emp);
		cout << endl;
		cout << "do you want to add more?\n";
		cin >> enter;
		cout << "\n";
	}

}
void printemployee(vector <stEmployee>& vemp) {
	for (stEmployee empo : vemp) {
		cout << "first name:" << empo.FirstName << endl;
		cout << "last name:" << empo.LastName << endl;
		cout << "salary:" << empo.Salary << endl;
		cout << endl;

	}
}
void swapr(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int *n1,int *n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}*/
void print(string namefile) {
	fstream file;
	file.open(namefile, ios::in);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	}
}
void load(string namefile,vector<string>& vfile) {
	fstream file;
	file.open(namefile, ios::in);
	if (file.is_open()) {
		string line;
		while(getline(file,line)){
			vfile.push_back(line);
		}
		file.close();
	}
}
void save(string name,vector<string> vfile) {
	fstream file;
	file.open(name, ios::out);
	if (file.is_open()) {
		for (string& line : vfile) {
			if(line!=" ")
			file << line << endl;
		}
		file.close();
	}
}
void deletee(string name, string record) {
	vector<string> newv;
	load(name, newv);
	for (string& line : newv) {
		if (line == record)
			line = " ";

	}
	save(name, newv);
}
void update(string name, string record,string updatee) {
	vector <string> newone;
	load(name, newone);
	for (string& line : newone) {
		if (line == record) {
			line = updatee;
		}
	}
	save(name, newone);
}
int main()
{
	time_t t = time(0);//time now
	/*char* dt = ctime(&t);//convert to string we use pointer bec time_t just use ref 
	cout << dt << endl;
	tm* gt = gmtime(&t);//غرينتشconvert to structure
	dt = asctime(gt);// as ctime convert struct to string
	cout << dt<<endl;*/
	tm* now = localtime(&t);//local time like gmtime
	cout << now->tm_year +1900<< endl;
	cout << now->tm_mon + 1 << endl;
	cout << now->tm_mday << endl;
	cout << now->tm_hour << endl;
	cout << now->tm_min << endl;
	cout << now->tm_sec << endl;

















	/*vector<string> vfile{"lemar","diyar","yamn","kenan","lemar"};
	print("dd.txt");
	cout << endl;
	update("dd.txt", "diyar","lemar");
	cout << endl;
	print("dd.txt");*/
	/*vector<string> vfile;
	print("lemar.txt",vfile);
	for (string& line : vfile) {
		cout << line << endl;

	}*/
	/*fstream myfile;
	myfile.open("lemar.txt", ios::out | ios::app);//write mood
	if (myfile.is_open()) {
		myfile << "hi this is the first line\n";
		myfile << "hhhhhh\n";
		myfile << "third line\n";
		myfile.close();
		

	}*/
	/*char x;
	char y;
	x = toupper('a');
	y = tolower('J');
	cout << x << " " << y << " " << endl;
	cout << isupper('A') << endl;
	cout << islower('A') << endl;
	cout << isdigit('A') << endl;
	cout << ispunct('A') << endl;*/
	//string object
	/*string s1 = "lemar zubaide";
	cout << s1.length() << endl;
	cout << s1.at(3) << endl;
	s1.append(",computer brain");
	cout << s1 << endl;
	s1.insert(6, " lolo ");
	cout << s1 << endl;
	cout << s1.substr(4, 9)<<endl;
	s1.push_back('k');
	cout << s1 << endl;
	s1.pop_back();
	cout << s1 << endl;
	cout << s1.find("lolo") << endl;
	cout << s1.find("Lolo") << endl;
	if (s1.find("Lolo") == s1.npos) {
		cout << "not found" << endl;
	}
	s1.clear();
	cout << s1 << endl;*/
	/*vector<int> num{1,2,3,4,5};
	vector<int> ::iterator iter;
	for (iter = num.begin(); iter != num.end(); iter++) {
		cout << *iter << endl;//عامل حالو بويتنر بس هو اوبجكيت 

	}
	//try catch exception handling
	try {
		cout << num.at(5);
	}
	catch(...)
	{
		cout << "out of bound";
	}*/
	/*cout << num.at(0) << endl;
	cout << num.at(1) << endl;
	cout << num.at(2) << endl;
	cout << num.at(3) << endl;
	cout << num.at(4) << endl;
	cout << endl;
	cout << num[0] << num[4] << num[3] << endl;*/
	/*for (const int& i : num) {
		cout << i << " ";
	}
	cout << endl;
	for (int& i : num) {
		i = 20;
		cout << i << " ";
	}
	cout << endl;
	num[1] = 40;
	num.at(4) = 60;
	for (const int& i : num) {
		cout << i << " ";
	}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//daynamic memory allocation in runtime
	/*int* px;
	float* py;
	px = new int;
	py = new float;
	*px = 45;
	*py = 50.4;
	//cout << *px << endl;
	//cout << *py << endl;
	delete px;
	delete py;
	//dynamic arrays
	int num;
	cout << "enter total number of student:" << endl;
	cin >> num;
	float* p;
	p = new float[num];
	cout << "enter the grades" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "studet " << i + 1<<":";
		cin >> *(p + i);

	}
	cout << "diplay:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "student" << i + 1 << ":" << *(p + i) << endl;
	}
	delete[] p;*/
	//void pointer can point to any thing
	/*void* p;
	int x = 50;
	p = &x;
	cout << p << endl;
	cout << *(static_cast<int*>(p)) << endl;
	float f = 50.4;
	p = &f;
	cout << p << endl;
	cout << *(static_cast<float*>(p)) << endl;*/
	/*stEmployee employee, * pr;
	employee.Name = "lemar";
	employee.Salary = 5000.0;
	pr = &employee;
	cout << pr->Name << endl;
	cout<<pr->Salary << endl;*/
	/*int arr[4] = {10,20,30,40};
	int* p = arr;
	cout << p << endl;
	cout << p + 1 << endl;
	cout << p + 2 << endl;
	cout << p + 3 << endl;
	cout << endl << endl;
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl << endl << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << *(p + i) << endl;
	}*/
	/*int a = 1, b = 2;
	swapr(a, b);
	cout << a << b;
	swapp(&a, &b);
		cout << a << b;*/
	/*vector <int> vNumber;
	int a = 10;
	int b = 50;
	cout << a << endl;
	cout << &a << endl;
	int* p = &a;//creating pointer existing in the memory بقدر اغير اتجاهه
	//p = &b;//غير اتجاهaالى  b
	cout << p << endl;
	cout << *p << endl;
	*p = 20;//مفتاح البوينتر
	cout << a << endl;
	cout << *p << endl;
	a = 30;
	cout << a<< endl;
	cout << *p << endl;
	int& x = a;//creating refrence dosent exisit in momery just a nike name to a ما بقدر اغيره لفاريبل تاني
	int * k = &x;
	cout << k << endl;;*/
	//vector <stEmployee> vemp;
	/*int a = 10;
	int &x = a;
	x = 20;//change in the two 
	cout << &a << endl;
	cout << &x << endl;
	cout << a << endl;
	cout << x << endl;*/
	/*vNumber.push_back(10);
	vNumber.push_back(20);
	vNumber.push_back(30);
	vNumber.push_back(40);
	cout << vNumber.size()<<endl;
	cout << "first number:" << vNumber.front()<<endl;
	cout << vNumber.back()<<endl;
	cout << vNumber.capacity()<<endl;
	cout << vNumber.empty() << endl;*/

}
