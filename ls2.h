//Labsheet 2
//
#ifndef LABSHEETS_LS2_H
#define LABSHEETS_LS2_H

#endif //LABSHEETS_LS2_H
#include <iostream>
#include "ls21.h"
#include "ls22.h"
#include "ls23.h"
using namespace std;

namespace labsheet2{
    void ls21(){
        int choice;
        up:
        cout<<"1. Sample Program "<<endl;
        cout<<"2. Cube of integer,float,double"<<endl;
        cin>>choice;
        switch (choice){
            case 1:sample21::main();break;
            case 2:cube_overloading::main();break;
            default:
                cout<<"Invalid input try again"<<endl;
                goto up;
        }
    }
    void ls22(){
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.Sample Program 1"<<endl;
        cout<<"2.Sample Program 2"<<endl;
        cout<<"3.Area of triangle(three sides are given) and area of rectangle"<<endl;
        cout<<"4.Volume of sphere,cylinder,and cone"<<endl;
        cin>>choice;
        switch (choice){
            case 1:sample22_1::main();break;
            case 2:sample22_2::main();break;
            case 3:area::main();break;
            case 4:volume::main();break;
            default: goto up;
        }
    }
    void ls23() {
        cout<<"Sample Inline Function"<<endl;
        sample23::main();
    }
    int main(){
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.Function overloading"<<endl;
        cout<<"2.Default Argument"<<endl;
        cout<<"3.Inline Function"<<endl;
        cin>>choice;
        switch (choice){
            case 1:ls21();break;
            case 2:ls22();break;
            case 3:ls23();break;
            default:
                cout<<"Invalid number try again"<<endl;
                goto up;
        }
        return 0;
    }
}