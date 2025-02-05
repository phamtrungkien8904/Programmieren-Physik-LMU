#include <iostream>
#include <vector>
using namespace std;

vector<double> cross(vector<double> a, vector<double> b){
    vector<double> P;
    P.push_back(a[1]*b[2] - a[2]*b[1]);
    P.push_back(a[2]*b[0] - a[0]*b[2]);
    P.push_back(a[0]*b[1] - a[1]*b[0]);
    return P;
}

int main(){
    vector<double> a = {1,2,3};
    vector<double> b = {4,5,6};
    for (auto v : cross(a,b)){
        cout << v << endl;
    }
    return 0;
}