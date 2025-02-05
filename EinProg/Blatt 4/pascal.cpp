#include <iostream>
#include <vector>
using namespace std;

vector<int> binom(int n){
    vector<int> P = {0};
    for (int i = 1; i <= n; i++){
        P.push_back(i*i);
    }   
    return P;
};



int main(){
    for (auto v : binom(5)){
        cout << v << ' ';
        cout << endl; 
    }
    return 0;
}