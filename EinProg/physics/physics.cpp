#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;


int main(){
    double t_min = 0;
    double t_max = 2;
    double dt = 0.01;
    int N = (t_max - t_min)/dt;

    vector<double> t(N,0);
    vector<double> vx(N,0);
    vector<double> vy(N,0);
    vector<double> x(N,0);
    vector<double> y(N,0);


    ofstream MyData("data.txt");
    MyData << 2;
    return 0;
}