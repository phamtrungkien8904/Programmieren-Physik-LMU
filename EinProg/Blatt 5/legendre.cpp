#include <iostream>
#include <vector>
using namespace std;

vector<double> legendre(double x, int N){
    vector<double> res;
    res.push_back(1);
    res.push_back(x);
    for(int n = 2; n <= N; n++){
        double next = (2.0*n - 1.0)/n*x*res[n-1] - (n-1.0)/n*res[n-2];
        res.push_back(next);
    }
    return res;
}

int main(){
    double x = 1.2;
    int N = 10;
    vector<double> leg = legendre(x,N);
    for (size_t i = 0; i < leg.size(); i++){
        cout << "P_" << i << " = " << leg[i];
        cout << endl;
    }
    return 0;
}