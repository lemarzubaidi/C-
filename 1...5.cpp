
#include <iostream>
#include<string>
using namespace std;
//1...5
/*void printname(string name) {
    cout << "your name:" << name;
}
string readname() {
    string name;
    cout << "whats your name:" << endl;
    getline(cin, name);
    return name;
}
enum ennum { odd = 1, even = 2 };
int readnum(){
    int num;
    cout << "enter your number:" <<endl;
    cin >>num;
    return num;
}
ennum checknum(int num) {
    if (num % 2 == 0)
        return ennum::even;  
    else
        return ennum::odd;
}
void printnum(ennum num) {
    if (num == ennum::even)
        cout << "even";
    else
        cout << "odd";
}*/
struct info {
    int age;//group for info so use structer
    bool hasdriving;
    bool  haverecommendation;
};
info read() {//لما بدي اقرا مجموعة من الستركتشر لازم الفنكشن يرجع ستركتشر عشان بالاخير بعد ما يقرا العمر والرخصة يرجعهم التنتين 
    info info;
    cout << "enter your age" << endl;
    cin >> info.age;
    cout << "enter if you have a drive lic?" << endl;
    cin >> info.hasdriving;
    cout << "have?";
    cin >> info.haverecommendation;
    return info;
}
bool isaccepted(info in) {
    if (in.haverecommendation) {
        return true;
    }
    else{
    return (in.age > 21 && in.hasdriving);}//لازم تدخلي يا 1 يا صفر ولا بعتبرو غلط
}
void print(info in) {
    if (isaccepted(in))
        cout << "hierd";
    else
        cout << "rejected";
}
/*
struct info{
int age;
bool have;
};
info read(){
info in;
cin>>in.age;
cin>>in.have;}
bool isaccepted(info in){
return (in.age>21&&in.have);}
void print(info in){
if(isaccepted(in))
cout<<"hierd";
else
cout<<"rejected";
}


*/


int main()
{
  
    print(read());







   // printnum(checknum(readnum()));
   /* for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i % 2 == 0) {
                cout << "x";
                cout << "o";
            }
            else
            {
                cout << "o";
                cout << "x";
            }
        }
        cout << endl;

    }cout << endl << endl;
    for (int i = 0; i <=4 ; i++)
    {
        for (int j = 0; j <4-i; j++)
        {
            cout << " ";
        }
        for (int k= 0; k <=i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 4; i >=0; i--)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <=i; k++)
        {
            cout << "* ";
        }
       
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 65; i <=74 ; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(j);
        }cout << endl;
    }*/


    return 0;



}
