#ifndef math
#define math

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Vector3 {
    public:
    double dot(vector<double> a, vector<double> b){
        double res = 0;
        for (size_t i = 0; i < a.size(); i++){
            res += a[i]*b[i];
        }
        return res;
    }
    vector<double> cross(vector<double> a, vector<double> b){
        vector<double> res;
        res.push_back(a[1]*b[2] - a[2]*b[1]);
        res.push_back(a[2]*b[0] - a[0]*b[2]);
        res.push_back(a[0]*b[1] - a[1]*b[0]);
        return res;
    }
    double norm(vector<double> a){
        double res = 0;
        for (size_t i = 0; i < a.size(); i++){
            res += pow(a[i],2);
        }
        return sqrt(res);
    }
    vector<double> vecA(double a, double b, double c){
        vector<double> res;
        res.push_back(a);
        res.push_back(b);
        res.push_back(c);
        return res;
    }
};

#endif