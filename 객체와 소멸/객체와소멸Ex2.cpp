#include <iostream>
using namespace std;

//복소수로 생성사 예제를 해보자
class Complex{

public:
    Complex(){
        real=0;
        imag=0;
    }
    //오버로딩
    Complex(double real_, double imag_){
        real=real_;
        imag=imag_;
    }

    double getReal(){
        return real;
    }
    void setReal(double real1){
        real=real1;
    }

    double getImag(){
        return imag;
    }
    void setReal(double imag1){
        imag=imag1;
    }

private:
    double real;
    double imag;
}
int main(){
    //객체생성 디폴트 생성자
    Complex c1;
    //여러가지 방법의 객체생성 오버로딩 생성자
    Complex c2=Complex(2,3);
    Complex c3(3,4);
    Complex c4={5,5};
    Complex c5= Complex{5,4};
    Complex c6 {4,6};

    cout << "c1는"<<c1.getImag() <<","<< c1.getReal()<<endl;
    cout << "c2는"<<c2.getImag() <<","<< c2.getReal()<<endl;
    cout << "c1는"<<c3.getImag() <<","<< c3.getReal()<<endl;

}