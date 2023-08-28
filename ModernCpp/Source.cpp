#include <cstring>
#include <iostream>
using namespace std;


int main() {
    char name[10];
    const char* name_c = "name";
    strcpy(name, name_c);

    cout << name << endl;
}