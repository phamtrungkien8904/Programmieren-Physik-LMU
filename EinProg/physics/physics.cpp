#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;


int main(){
    const double v0 = 10;
    const double theta = 3.1415/4; // 45 degrees
    const double g = 9.81;
    const double h0 = 10;

    double t_min = 0;
    double t_max = 2;
    double dt = 0.01;
    int N = (t_max - t_min)/dt;

    vector<double> t(N,0);
    vector<double> vx(N,0);
    vector<double> vy(N,0);
    vector<double> x(N,0);
    vector<double> y(N,0);

    // Initial conditions
    x[0] = 0;
    vx[0] = v0*cos(theta);
    y[0] = h0;
    vy[0] = v0*sin(theta);
    t[0] = 0;

    // Euler's method
    for (int i = 1; i <= N; i++){
        t[i] = t[i-1] + dt;
        vx[i] = vx[i-1];
        x[i] = x[i-1] + dt*vx[i-1];
        vy[i] = vy[i-1] - g*dt;
        y[i] = y[i-1] + dt*vy[i-1];
    }


    ofstream MyData("data.txt");
    for (int i = 0; i <= N; i++){
        MyData << t[i] << ", " << x[i] << ", " << y[i] << endl;
    }
    return 0;
}