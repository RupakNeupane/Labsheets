//Function Overloading
//

#ifndef LABSHEETS_LS21_H
#define LABSHEETS_LS21_H

#endif //LABSHEETS_LS21_H
#include <iostream>
#include <cmath>
using namespace std;

namespace sample21{
    void add(int num1,int num2){
        cout<<"Hey!! You are calling function with two parameter of type int,int..."<<endl;
        cout<<"Sum of num1 and num2 is: "<<num1+num2<<endl;
    }
    void add(int num1,int num2,float num3){
        cout<<"Hey!! You are calling function with three parameter of type int,int,float..."<<endl;
        cout<<"Sum of num1,num2 and num3 is: "<<num1+num2+num3<<endl;
    }
    void add(int num1,float num2){
        cout<<"Hey!! You are calling function with two parameter of type int,float..."<<endl;
        cout<<"Sum of num1 and num2 is: "<<num1+num2<<endl;
    }
    int main(){
        int a=10,b=20;
        float c=10.10;
        add(a,b);
        add(a,b,c);
        add(a,c);
        return 0;
    }
}
namespace cube_overloading{
    int cube(int x){
        return pow(x,3);
    }
    float cube(float x){
        return pow(x,3.0);
    }
    double cube(double x){
        return pow(x,3.000);
    }
    int main(){
        cout<<cube(int(10))<<endl;
        cout<<cube(float(12.10))<<endl;
        cout<<cube(double(13.965))<<endl;
        return 0;
    }
}