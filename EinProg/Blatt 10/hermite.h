#ifndef hermite
#define hermite

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class HermitePolynomial {
    int m_n;
    double a(int N) { return 2.0; }
    double b(int N) { return 0.0; }
    double c(int N) { return 2.0 * N; }
    double v0() { return 1.0; }

public:
    HermitePolynomial(int N) : m_n(N) {}
    vector<double> allValues(double X) {
        vector<double> vals;
        if (m_n == 0)
            vals.push_back(v0());
        if (m_n >= 1)
            vals.push_back(a(0)*X + b(0));
        for (int k = 2; k <= m_n; k++)
            vals.push_back((a(k)*X + b(k))*vals[k-1] + c(k)*vals[k-2]);
        return vals;
    }

    string printAll(double X) {
        string res;
        auto vals = allValues(X);
        for (auto v : vals){
            res += " " + to_string(v);
        }
        return res;
    }
};

#endif