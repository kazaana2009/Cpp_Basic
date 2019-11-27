#include <iostream>
//생성자: 객체가 생성될때 자동으로 호출되는 합수
//소멸자: 객체가 소멸될떄 자동으로 호출되는 함
using namespace std;

class MyClass{
public:
    //생성자
    MyClass(){
        cout <<"생성자가 호출되었다"<<endl;
    }
    //소멸
    ~MyClass(){
        cout <<"소멸가 호출되었다"<<endl;
    }
};

//MyClass glopbj;
void localobj(){
    cout<<"로컬 오브젝트함수 시작 "<<endl;
    MyClass localobj;
    cout<<"로컬 오브젝트함수 끝 "<<endl;

}
int main() {
    cout <<"메인함수 시작"<<endl;
    localobj();
    cout <<"메인함수 "<<endl;


}