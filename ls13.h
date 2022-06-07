//Structure in C++
#ifndef LABSHEETS_LS13_H
#define LABSHEETS_LS13_H

#endif //LABSHEETS_LS13_H
#include <iostream>
using namespace std;
//Sample of Structure in C++
namespace sample13{
    struct Student{
        int roll_no;
        int age;
    };
    int main(){
        Student S;
        S.roll_no=2;
        S.age=18;
        cout<<"Her Roll Number is: "<<S.roll_no<<endl;
        cout<<"Her age is: "<<S.age;
        return 0;
    }
}
//Store roll,name,age
namespace ls1_3_2
{
    struct Student{
    private:
        int roll_no;
        string name;
        int age;
    public:
        void input(int i){
            roll_no=i+1;
            cout<<"Details of Roll No."<<roll_no<<endl;
            cout<<"Name =";
            cin>>name;
            cout<<"Age =";
            cin>>age;
        }
        void display(){
            cout<<"Roll No\t"<<roll_no<<endl;
            cout<<"Name\t"<<name<<endl;
            cout<<"Age\t"<<age<<endl;
        }
    };
    int main(){
        Student S[5];
        int roll;
        for (int i=0;i<5;i++){
            S[i].input(i);
        }
        cout<<"Enter the roll to display details:"<<endl;
        cin>>roll;
        S[roll-1].display();
        return 0;
    }
}
//Add two distances in inch-feet
namespace add_inch_feet{
    struct distance{
        int inch;
        int feet;
        void input(){
            cout<<"Enter distance in inch feet:"<<endl;
            cin>>inch>>feet;
        }
    };
    void add(distance x, distance y){
        distance z;
        z.feet=x.feet+y.feet;
        z.inch=x.inch+y.inch;
        if (z.feet>=12){
            z.inch += z.feet/12;
            z.feet=z.feet%12;
        }
        cout<<"Total distance is "<<z.inch<<"inch "<<z.feet<<"feet "<<endl;
    }
    int main(){
        distance d1,d2;
        d1.input();
        d2.input();
        add(d1,d2);
        return 0;
    }
}