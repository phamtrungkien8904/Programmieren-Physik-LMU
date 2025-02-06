#include <iostream>
using namespace std;

void swap(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}

int main(){
    double a=1, b=2;
    swap(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}