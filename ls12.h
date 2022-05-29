//Call by Value and Call By Reference

#ifndef LABSHEETS_LS12_H
#define LABSHEETS_LS12_H

#endif //LABSHEETS_LS12_H
#include <iostream>
using namespace std;
//Call By Value
namespace callbyval{
    void call_by_val(int a){
        a=20;
        cout<<"Value of a from this function: "<<a<<endl;
    }
    int main(){
        int x=100;
        call_by_val(x);
        cout<<"Value of a main function: "<<x;
        return 0;
    }
}

//Swap two numbers using call by value
namespace swapbyvalue{
    void call_by_val(int x, int y){
        int c;
        c=x;
        x=y;
        y=c;
        cout<<"Swapped :: "<<x<<","<<y<<endl;
    }
    int main(){
        int a,b;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Initial value of a and b are "<<a<<","<<b<<endl;
        call_by_val(a,b);
        cout<<"Value of a and b after calling function is "<<a<<","<<b;
        return 0;
    }
}

//Call By Reference
namespace callbyref{
    void call_by_ref(int &a){
        a=20;
        cout<<"Value of a from this function: "<<a<<endl;
    }
    int main(){
        int x=100;
        call_by_ref(x);
        cout<<"Value of a main function: "<<x;
        return 0;
    }
}

//Swap two numbers using call by reference
namespace swapbyref{
    void call_by_ref(int &x, int &y){
        int c;
        c=x;
        x=y;
        y=c;
        cout<<"Swapped :: "<<x<<","<<y<<endl;
    }
    int main(){
        int a,b;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Initial value of a and b are "<<a<<","<<b<<endl;
        call_by_ref(a,b);
        cout<<"Value of a and b after calling function is "<<a<<","<<b;
        return 0;
    }
}