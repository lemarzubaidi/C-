#include <iostream>
using namespace std;
class clsa {
    friend int mysum(clsa a1);
private:
    int var1;
    
protected:
    int var3;
public:
    int var2;
    clsa() {
        var1 = 10;
        var2 = 20;
        var3 = 30;
    }
    friend class clsb;
    
   
};
int mysum(clsa a1) {

    return a1.var2+a1.var1+a1.var3;
}
/*class clsb {
public:
    void display(clsa a1) {
        cout << endl << "the value of var1=" << a1.var1;
        cout << endl << "the value of var2=" << a1.var2;
        cout << endl << "the value of var3=" << a1.var3;
    }
};*/
int main()
{
    clsa a1;
    cout<<mysum(a1);
   
}

