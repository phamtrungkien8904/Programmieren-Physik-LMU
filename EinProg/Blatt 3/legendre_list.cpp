#include <iostream>
#include <list>
using namespace std;

list<double> legendre_list(int n, double x) {
    list<double> l;
    if (n == 0) {
        l.push_back(1);
    } else if (n == 1) {
        l.push_back(1);
        l.push_back(x);
    } else {
        list<double> l1 = legendre_list(n - 1, x);
        list<double> l2 = legendre_list(n - 2, x);
        double l_val = (2.0 * n - 1.0) / n * x * l1.back() - (n - 1.0) / n * l2.back();
        l1.push_back(l_val);
        l = l1;
    }
    return l;
}

int main() {
    cout << "Legendre Polynomial" << endl;
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter x: ";
    double x_in;
    cin >> x_in;
    list<double> l = legendre_list(N, x_in);
    for (int i = 0; i <= N; i++) {
        cout << "P" << i << "(" << x_in << ") = " << l.front() << endl;
        l.pop_front();
    } 
    return 0;
}

