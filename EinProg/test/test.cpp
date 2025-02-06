#include "test.h"


int main(int argc, char *argv[]){
    string myText;
    ifstream MyReadFile(argv[1]);
    while(getline(MyReadFile, myText)){
        cout << myText << endl;
    }
    return 0;
}
