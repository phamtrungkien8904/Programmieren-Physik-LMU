#include <iostream>
using namespace std;

int nFac(int n){
    int P = 1;
    if (n < 0){
        cout << "No result!" << endl;
        exit(0);
    } else {
        for (int i = 1; i <= n; i++){
            P *= i;
        }
        return P;
    }
}

int main(){
    cout << nFac(-2) << endl;
    return 0;
}