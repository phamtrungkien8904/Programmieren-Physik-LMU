#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> a = {1, 2, 3, 4, 5};
    vector<double> b = {5.1, 4, 3, 2, 1};
    double alpha = 2.1;
    vector<double> c;
    for (int i = 0; i < a.size(); i++) {
        c.push_back(a[i] + alpha * b[i]);
    }
    for (auto elem : c) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
