#include "epString.h"

int main(){
    string s = "a,b,c,d";
    vector<string> parts = ep::splitString(s);
    for (auto v : parts){
        cout << v << endl;
    }
    return 0;
}