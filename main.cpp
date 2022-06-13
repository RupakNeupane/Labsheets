#include <iostream>
#include "ls1.h"
#include "ls2.h"
#include "ls3.h"
using namespace std;

int main() {
    int ls;
    up:
    cout << "Labsheet Number:: ";
    cin >> ls;
    switch (ls){
        case 1:
            labsheet1::main();
            break;
        case 2:
            labsheet2::main();
            break;
        case 3:
            labsheet3::main();
            break;
        default:
            cout<<"Invalid Input Try Again"<<endl;
            goto up;
    }
    return 0;
}
