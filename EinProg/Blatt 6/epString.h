#ifndef epString
#define epString

#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace ep{
    vector<string> splitString(string s){
        vector<string> res;
        string temp = "";
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ','){
                res.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }
        }
        res.push_back(temp);
        return res;
    }
}

#endif