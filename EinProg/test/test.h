#ifndef test
#define test

#include <iostream> 
#include <vector>
#include <string>
#include <fstream>
using namespace std;

namespace MyMath{
    double multiply(vector<double> a, vector<double> b){
        double P = 0;
        for (size_t i = 0; i < a.size(); i++){
            P += a[i] * b[i];
        }
        return P;
    }   

    vector<double> cross(vector<double> a, vector<double> b){
        vector<double> P;
        P.push_back(a[1]*b[2] - a[2]*b[1]);
        P.push_back(a[2]*b[0] - a[0]*b[2]);
        P.push_back(a[0]*b[1] - a[1]*b[0]);
        return P;
    }

    double square(int n){
        return n*n;
    }
}

namespace ep{
    double pi = 3.14159265;
}




#endif