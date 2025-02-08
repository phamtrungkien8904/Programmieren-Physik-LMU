#include "epString.h"
using namespace ep;

int main(){
    string s = "a,b,c,d";
    vector<string> parts = splitString(s);
    for (auto v : parts){
        cout << v << endl;
    }
    return 0;
}