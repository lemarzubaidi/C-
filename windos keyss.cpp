#include <iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
/*enum enword { small = 1, capital = 2, dig = 3, spi = 4 };
int read(string mess) {
    int num;
    do {
        cout << mess << endl;
        cin >> num;

    } while (num < 0);
    return num;
}
int randr(int from,int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
char getrand(enword chose) {
    switch (chose) {
    case enword::capital:
        return (char)randr(65, 90);
    case enword::small:
        return (char)randr(97, 122);
    case enword::spi:
        return (char)randr(21, 47);
    case enword::dig:
        return (char)randr(48, 57);
    }
}
string word() {
    string word = "";
    word += getrand(enword::capital);
    word += getrand(enword::capital);
    word += getrand(enword::capital);
    word += getrand(enword::capital);
    return word;
}
string key() {
    string key = "";
    key += word() + "-" + word() + "-" + word() + "-" + word();
    return key;
}
void keys(short num) {
    for (int i = 1; i <= num; i++)
    {
        cout << "key[" << i << "]:";
        cout << key() << endl;;
    }

}
*/
enum enword{small=1,cap=2,spi=3,dig};
int read(string mess) {
    int num;
    do {
        cout << mess << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
int randnum(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
char randchar(enword word) {
   switch(word){
    case enword::cap:
        return (char)randnum(65, 90);
    case enword::small:
        return (char)randnum(97, 122);
    case enword::spi:
        return (char)randnum(21, 47);
    case enword::dig:
        return (char)randnum(48, 57);
    }
   return '/0';
}
string word(enword worden,short length) {
    string word = "";
    for (int i = 1; i <= length; i++)
    {
        word += randchar(worden);
    }
    return word;
}
string key() {
    string key = "";
   key += word(enword::cap, 4) + "-" + word(enword::cap, 4) + "-" + word(enword::cap, 4) + "-" + word(enword::cap, 4);
   return key;
}
void keys(short num) {
    for (int i = 1; i <= num; i++)
    {
        cout << "key [" << i << "]:" << key() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    keys(read("enter number:"));
   
}

