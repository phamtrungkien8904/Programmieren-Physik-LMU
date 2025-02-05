#include <iostream>
#include <vector>
using namespace std;

double multiply(vector<double> a, vector<double> b){
    double P = 0;
    for (size_t i = 0; i < a.size(); i++){
        P += a[i] * b[i];
    }
    return P;
}

int main(){ 
    vector<double> a = {1,2,3,4,5};
    vector<double> b = {6,7,8,9,10};
    cout << multiply(a,b) << endl;
    return 0;
}