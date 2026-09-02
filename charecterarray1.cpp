#include<iostream>
using namespace std;

int main() {
    char name[] = "Atharv";
    char *p = name;
    int i;

    for(i = 0; ; i++) {
        if(*(p+i) == '\0') {
            break;
        }
        else {
            cout << *(p+i) << endl;
        }
    }

    return 0;
}