//
// Created by Jae hyak Choi on 2019/11/27.
//
#include <iostream>
using namespace std;

class MyClass{
public:
    void thisPrint(Myclass *ptr){
        cout << "나의 주소는 "<< ptr <<"입니다."<<endl
    }

};

int main(){
    MyClass a,b;
    a.thisPrint(&a);
    b.thisPrint(%b);
}
