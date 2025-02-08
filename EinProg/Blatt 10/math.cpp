#include "math.h"

int main(){
    Vector3 test;
    vector<double> a = {1,2,3};
    vector<double> b = {4,5,6};
    vector<double> c = {3,4};
    cout << test.dot(a,b) << endl;
    cout << test.norm(c) << endl;
    for (auto v : test.vecA(7,8,9)){
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}