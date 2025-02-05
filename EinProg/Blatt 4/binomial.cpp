#include <iostream>
using namespace std;

int binom(int n, int k){
    int P;
    if (k == 0 || k == n){
        P = 1;
    } else {
        P = binom(n-1, k-1) + binom(n-1, k);
    }
    return P;
};

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int n = 0; n <= N; n++){
        for (int k = 0; k <= n; k++){
            cout << binom(n,k) << ' '; 
        }
        cout << endl;  
    }
    return 0;
}