#include <iostream>
using namespace std;

double legendre(int n, double x){
    // P_n = (2n-1)/n x P_{n-1} - (n-1)/n P_{n-2}
    double P;
    if (n == 0){
        P = 1;
    }
    else if (n == 1){
        P = x;
    }
    else if (n > 1){
        P = (2.0 * n - 1.0)/n * x * legendre(n-1,x) - (n - 1.0)/n * legendre(n-2,x);
    } 
    return P;
}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    double x;
    cout << "Enter x: ";
    cin >> x;
    for (int n = 0; n <= N; n++){
        cout << "P_" << n << "(" << x << ") = " << legendre(n,x) << endl;
    } 
    return 0;
}