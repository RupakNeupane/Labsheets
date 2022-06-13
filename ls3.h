//Labsheet 3
//
#ifndef LABSHEETS_LS2_H
#define LABSHEETS_LS2_H

#endif //LABSHEETS_LS2_H
#include <iostream>
#include "ls31.h"
using namespace std;

namespace labsheet3{
    void ls31(){
        int choice;
        up:
        cout<<"1. Sample Program "<<endl;
        cout<<"2. Add & Subtract Time"<<endl;
        cout<<"3. Celsius & Fahrenheit Conversion"<<endl;
        cout<<"4. Sum,Difference and Product of Complex Numbers"<<endl;
        cout<<"5. Name,Address,Joining_Year and Salary of Employee Class"<<endl;
        cin>>choice;
        switch (choice){
            case 1:sample31::main();break;
            case 2:add_subtract_time::main();break;
            case 3:c_f_conversion::main();break;
            case 4:complexes::main();break;
            case 5:Employee_details::main();break;
            default:
                cout<<"Invalid input try again"<<endl;
                goto up;
        }
    }
    void ls32(){
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
    int main(){
        int choice;
        up:
        cout<<"Choose the number"<<endl;
        cout<<"1.Class and Object"<<endl;
        cout<<"2.Constructor and Destructor"<<endl;
        cin>>choice;
        switch (choice){
            case 1:ls31();break;
            case 2:ls32();break;
            default:
                cout<<"Invalid number try again"<<endl;
                goto up;
        }
        return 0;
    }
}