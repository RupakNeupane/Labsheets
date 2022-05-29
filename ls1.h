//
// Created by Dell on 5/29/2022.
//

#ifndef LABSHEETS_LS1_H
#define LABSHEETS_LS1_H

#endif //LABSHEETS_LS1_H
#include "ls11.h"
#include "ls12.h"
#include "ls13.h"
using namespace std;
namespace labsheet1{
    void ls11(){
        int choice;
        up:
        cout<<"1. Sample program of topic 1"<<endl;
        cout<<"2. Add and multiply two numbers"<<endl;
        cout<<"3. Greatest among three numbers"<<endl;
        cout<<"4. Fibonacci"<<endl;
        cin>>choice;
        switch (choice){
            case 1:sample11::main();
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
    }
    void ls12(){
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.Call by value"<<endl;
        cout<<"2.Swap two numbers using call by value"<<endl;
        cout<<"3.Call by Reference"<<endl;
        cout<<"4.Swap two numbers using call by reference"<<endl;
        cin>>choice;
        switch (choice){
            case 1:callbyval::main();break;
            case 2:swapbyvalue::main();break;
            case 3:callbyref::main();break;
            case 4:swapbyref::main();break;
            default: goto up;
        }
    }
    void ls13() {
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.Sample structure"<<endl;
        cout<<"2.Store roll,name,age"<<endl;
        cout<<"3.add two distances inch-feet"<<endl;
        cin>>choice;
        switch (choice){
            case 1:sample13::main();break;
            case 2:ls1_3_2::main();break;
            case 3:add_inch_feet::main();break;
            default: goto up;
        }
    }
    int main(){
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.cin,cout,<<,>>"<<endl;
        cout<<"2.call by value and reference"<<endl;
        cout<<"3.Structure in C++"<<endl;
        cin>>choice;
        switch (choice){
            case 1:ls11();break;
            case 2:ls12();break;
            case 3:ls13();break;
            default:
                cout<<"Invalid number try again"<<endl;
                goto up;
        }
        return 0;
    }
}