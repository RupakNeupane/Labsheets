//Labsheet 1.1
// cin,cout,<<,>>

#ifndef LABSHEETS_LS11_H
#define LABSHEETS_LS11_H

#endif //LABSHEETS_LS11_H

//Sample program of topic 1
#include <iostream>
using namespace std;
namespace sample11{
    int main(){
        int height;
        cout<<"Enter your height:"<<endl;
        cin>>height;
        cout<<"My height is:"<<height;
        return 0;
    }
}
//Add and multiply two numbers
namespace add_multiply{
    int main(){
        int a,b;
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        cout<<"Addition ="<<a+b<<endl;
        cout<<"Multiplication ="<<a*b;
        return 0;
    }
}
//Greatest among three inputs
namespace greatest_no{
    int main(){
        int a,b,c,grt;
        cout<<"Enter three numbers:"<<endl;
        cin>>a>>b>>c;
        if (a>b){
            if (a>c){
                grt = a;
            }else{
                grt = c;
            }
        }else{
            if (b>c){
                grt = b;
            }else{
                grt = c;
            }
        }
        cout<<"Greatest No.= "<<grt;
        return 0;
    }
}
//Fibonacci numbers
namespace fibo{
    int fibo(int a,int b, int n){
        if (a>n){
            return a;
        }else{
            cout << a << endl;
            return fibo(b,a+b,n);
        }
    }

    int main() {
        int a=0,b=1,n;
        cout << "Enter a number" << endl;
        cin >> n;
        fibo(a,b,n);
        return 0;
    }
}