//Default Argument
//

#ifndef LABSHEETS_LS22_H
#define LABSHEETS_LS22_H

#endif //LABSHEETS_LS22_H
#include <iostream>
#include <cmath>
#define pi 3.1415
using namespace std;
namespace sample22_1 {
    int add(int a, int b, int c = 10, int d = 20) {
        cout << "Calling first function" << endl;
        return (a + b + c + d);
    }
    int main(){
        cout<<add(30,20)<<endl;
        cout<<add(20,30,40)<<endl;
        cout<<add(20,10,30,40)<<endl;
        return 0;
    }
}

namespace sample22_2{
    int add(int a, int b, int c=10,int d=20){
        cout<<"Calling first function"<<endl;
        return (a+b+c+d);
    }
    double add(int a,double b,double c=10.1,double d=20.1){
        cout<<"Calling second function"<<endl;
        return (a+b+c+d);
    }
    int main(){
        cout<<add(10,15)<<endl;
        cout<<add(10,15.1,25.1)<<endl;
        cout<<add(10,15,25,30)<<endl;
        return 0;
    }
}

namespace area{
    int area(int a , int b){
        return a*b;
    }
    double area(int a,int b,int c){
        double s= double(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    int main(){
        int x,y,z,choice;
        up:
        cout<<"Choose (1/2)"<<endl;
        cout<<"1.Area of triangle"<<endl;
        cout<<"2.Area of rectangle"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"Enter lengths of three sides :";
                cin>>x>>y>>z;
                cout<<"Area of triangle is "<<area(x,y,z)<<endl;
                break;
            case 2:
                cout<<"Enter length and breadth :";
                cin>>x>>y;
                cout<<"Area of rectangle is "<<area(x,y)<<endl;
                break;
            default:
                cout<<"Invalid input try again"<<endl;
                goto up;
        }
        return 0;
    }
}

namespace volume{
    double volume(int r,int h=0,int l=0){
        if (h==0 && l==0){
            return (pi*pow(r,3)*4/3);
        }else if (l==0){
            return (pi*pow(r,2)*h);
        }else if (h==0){
            return (pi*pow(r,2)*l/3);
        }
        return 0;
    }
    int main(){
        int r,h,l,choice;
        up:
        cout<<"Choose (1/2/3)"<<endl;
        cout<<"1.Volume of sphere"<<endl;
        cout<<"2.Volume of cylinder"<<endl;
        cout<<"3.Volume of cone"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"Enter radius of sphere: "<<endl;
                cin>>r;
                cout<<"Volume of sphere is "<<volume(r)<<endl;
                break;
            case 2:
                cout<<"Enter radius and height of cylinder: "<<endl;
                cin>>r>>h;
                cout<<"Volume of cylinder is "<<volume(r,h)<<endl;
                break;
            case 3:
                cout<<"Enter radius and height of cone: "<<endl;
                cin>>r>>l;
                cout<<"Volume of cone is "<<volume(r,0,l)<<endl;
            default:
                cout<<"Invalid input try again"<<endl;
                goto up;
        }
        return 0;
    }
}