#include "test.h"


int main(){
    vector <double> a = {1,2,3};
    vector <double> b = {4,5,6};
    cout << ep::pi << endl;
    cout << MyMath::multiply(a,b) << endl;
    for (auto v : MyMath::cross(a,b)){
        cout << v << ' ';
    }
    cout << endl;
    cout << MyMath::square(3) << endl;
    return 0;
}
