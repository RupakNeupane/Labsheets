//Inline Function
//

#ifndef LABSHEETS_LS23_H
#define LABSHEETS_LS23_H

#endif //LABSHEETS_LS23_H
#include <iostream>
#include <cmath>
using namespace std;

namespace sample23{
    inline double power(int a){
        return pow(a,2);
    }
    int main(){
        cout<<"The power of 2 is: "<<power(2)<<endl;
        return 0;
    }
}