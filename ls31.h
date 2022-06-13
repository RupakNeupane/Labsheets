//Classes And Objects in C++
//
//

#ifndef LABSHEETS_LS31_H
#define LABSHEETS_LS31_H

#endif //LABSHEETS_LS31_H
#include <iostream>
#include <iomanip>

using namespace std;

namespace sample31{
    class Student{
    private:
        int roll_no;
        string name;
        int age;
    public:
        void input(){
            cout<<"Enter your Roll_no:";
            cin>>roll_no;
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter your age:";
            cin>>age;
        }
        void display(){
            cout<<"Full Detail of Student:"<<endl;
            cout<<"Roll No.:"<<roll_no<<"\nName:"<<name<<"\nAge:"<<age;
        }
    };
    int main(){
        Student s;
        s.input();
        s.display();
        return 0;
    }
}

namespace add_subtract_time{
    class Time{
        int hour;
        int minute;
        int second;
    public:
        Time(int x=0,int y=0,int z=0):hour(x),minute(y),second(z){
        }
        Time add(Time t){
            Time temp;
            temp.second = second + t.second;
            temp.minute = minute +t.minute +temp.second/60;
            temp.second = temp.second%60;
            temp.hour = hour + t.hour +temp.minute/60;
            temp.minute = temp.minute%60;
            return temp;
        }
        Time subtract(Time t){
            Time temp;
            temp.hour = hour - t.hour;
            if (minute>=t.minute){
                temp.minute = minute - t.minute;
            }else{
                temp.minute = minute+60-t.minute;
                temp.hour = temp.hour-1;
            }
            if (second>=t.second){
                temp.second = second - t.second;
            }else{
                temp.second = second+60-t.second;
                temp.minute = temp.minute-1;
            }
            return temp;
        }
        void display(){
            cout<<hour<<" hr: "<<minute<<" min: "<<second<<" sec."<<endl;
        }
    };
    int main(){
        int x,y,z;
        cout<<"Enter hour,minute and second:"<<endl;
        cin>>x>>y>>z;
        Time t1(x,y,z);
        cout<<"Enter hour,minute and second:"<<endl;
        cin>>x>>y>>z;
        Time t2(x,y,z),t3;
        t3=t1.add(t2);
        cout<<"Addition =";
        t3.display();
        t3=t1.subtract(t2);
        cout<<"Subtraction =";
        t3.display();
        return 0;
    }
}

namespace c_f_conversion{
    class Temperature{
        float degree;
    public:
        Temperature(float x):degree(x){
        }
        void f_to_c(){
            degree = (degree-32)*5/9;
            cout<<"Temperature in Celsius is: "<<degree<<endl;
        }
        void c_to_f(){
            degree = 32+(degree*9/5);
            cout<<"Temperature in Fahrenheit is: "<<degree<<endl;
        }
    };
    int main(){
        int choice;
        float x;
        up:
        cout<<"Choose(1/2)"<<endl;
        cout<<"1.Celsius to Fahrenheit Conversion "<<endl;
        cout<<"2.Fahrenheit to Celsius Conversion "<<endl;
        cin>>choice;
        cout<<"Enter degree"<<endl;
        cin>>x;
        Temperature t(x);
        switch (choice){
            case 1:
                t.c_to_f();
                break;
            case 2:
                t.f_to_c();
                break;
            default:
                cout<<"Invalid Input try again"<<endl;
                goto up;
        }
        return 0;
    }
}

namespace complexes{
    class Complex{
        int real;
        int img;
    public:
        Complex(int x=0,int y=0):real(x),img(y){
        }
        Complex add(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
        Complex subtract(Complex c){
            Complex temp;
            temp.real = real - c.real;
            temp.img = img - c.img;
            return temp;
        }
        Complex product(Complex c){
            Complex temp;
            temp.real = real*c.real -img*c.img;
            temp.img = real*c.img + img*c.real;
            return temp;
        }
        void display() {
            if (img >= 0) {
                cout << real << " + " << img << "i" << endl;
            }else{
                cout << real <<" - "<< -img << "i"<<endl;
            }
        }
    };
    int main(){
        int real,img;
        cout<<"Enter a complex number:"<<endl;
        cin>>real>>img;
        Complex c1(real,img);
        cout<<"Enter another complex number:"<<endl;
        cin>>real>>img;
        Complex c2(real,img),c3;
        c3= c1.add(c2);
        cout<<"Addition =";
        c3.display();
        c3= c1.subtract(c2);
        cout<<"Subtraction =";
        c3.display();
        c3= c1.product(c2);
        cout<<"Product =";
        c3.display();
        return 0;
    }
}

namespace Employee_details{
    class Employee{
        string name;
        string address;
        int joining_year;
        int salary;
    public:
        void input(){
            cout<<"Name :";
            cin>>name;
            cout<<"Address :";
            cin>>address;
            cout<<"Joining Year :";
            cin>>joining_year;
            cout<<"Salary :";
            cin>>salary;
        }
        void display(){
            cout<<setw(20)<<name<<setw(20)<<address<<setw(20)<<joining_year<<setw(20)<<salary<<endl;
        }
    };
    int main(){
        Employee E[3];
        for(int i=0;i<3;i++){
            E[i].input();
        }
        cout<<setw(50)<<"Employee's Details"<<endl;
        cout<<setw(20)<<"Name"<<setw(20)<<"Joining Year"<<setw(20)<<"Address"<<setw(20)<<"Salary"<<endl;
        for(int i=0;i<3;i++){
            E[i].display();
        }
        return 0;
    }
}
