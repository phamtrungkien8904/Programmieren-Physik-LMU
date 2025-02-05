#include <iostream>
#include <vector>
using namespace std;

vector<double> sum(vector <double> a, vector<double> b, double alpha){
    vector<double> c;
    for (size_t k = 0; k < a.size(); k++){
        c.push_back(a[k] + alpha*b[k]);
    }
    return c;
}

int main(){
    vector<double> a = {1,2,3,4,5};
    vector<double> b = {3,4,5,6,7};
    double alpha = 3;
    for (auto v : sum(a,b,alpha)){
        cout << v << endl;
    }
    return 0;
}