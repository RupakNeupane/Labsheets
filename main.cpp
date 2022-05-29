#include <iostream>
#include "ls11.h"

using namespace std;

int ls1(){
    int choice;
    up:
    cout<<endl<<"1. Sample program of topic 1"<<endl;
    cout<<"2. Add and multiply two numbers"<<endl;
    cout<<"3. Greatest among three numbers"<<endl;
    cout<<"4. Fibonacci"<<endl;
    cin>>choice;
    switch (choice){
        case 1:sample1::main();
            break;
        case 2:add_multiply::main();
            break;
        case 3:greatest_no::main();
            break;
        case 4:fibo::main();
            break;
        default:
            cout<<"Invalid input try again"<<endl;
            goto up;
    }
    return 0;
}

int main() {
    int ls;
    cout << "Labsheet No. = ";
    cin >> ls;
    switch (ls){
        case 1:ls1();
    }
    return 0;
}
