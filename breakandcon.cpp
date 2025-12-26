
#include <iostream>
using namespace std;
//البريك بتطلع برا لوب بستفيد منها انه لما الاقي اشي ما اكمل للاخر في اللوب يبطئ البرنامج  
int main()
{
	/*int arr[10] = {10,20,44,55,33,22,99,88,99,100};
	for (int i = 0; i <=10; i++)//ممنوع تحطي اسم الارري دت اللينج لانها محدد اللينجث
	{//ممنوع احط arr.lengthمش مدعومة هيك بالسي بلس بلس للمصفوفة العادية لازم تكون من نوع فيكتور
		if (arr[i] == 20) { cout << i; break; }
	}

	/*for (int i = 1; i <= 10; i++)
	{
		if (i == 3) {
			break;
	}
		cout << i;
	}*/
	//الكونتينيو بتعمل سكب للكود الي بعدها كلو وبترجع لاول الفور لوب
	/*int num;
	int sum = 0;
	for (int i = 0; i <5; i++)
	{
		cin >> num;
		if (num > 50) {
			continue;
		}
		sum += num;
		

	}cout << sum;*/
	/*int i = 1;
	int n;
	int f = 1;
	cin >> n;
	if (n > 0) {
		while (i <= n) {
			f *= i;
			i++;
		}
	}
	cout << f;*/
	/*int num, m;
	cin >> num >> m;
	int f = 1;
	while (m != 0) {
		f *= num;
		m--;
	}
	cout << f;*/
	/*int num = 0;
	int sum = 0;
	while (num!=-99) {
		sum += num;
		cin >> num;

	}
	cout << sum;*/
	/*int i = 65;
	while (i <= 90) {
		cout << char(i) << endl;
		i++;
	}*/
	int pin;
	int c = 0;
	while (c < 3) {
		cin >> pin;
		if (pin != 1234) {
			cout << "7500";
		}
		else { cout << "wrong"; }
		c++;
}
	cout << "card locd";









	return 0;
}

