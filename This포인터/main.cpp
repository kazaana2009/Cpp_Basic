#include <iostream>

using namespace std;

class Myclass{
public:
    void printThis(){
        cout << "나의 주소는"<< this <<endl;
    }
};
int main() {
    Myclass a,b;
    cout << "a의 주소는"<< &a <<endl;
    cout << "b의 주소는"<< &b <<endl;

    // 자신이 속해있는 주소값을 가져온다.
    //보이지않는 this 포인터를 매개변수를 가지고있다.
    //TisPointer Ex2 참조한다 this 를 포인터로 풀어뒀다.
    a.printThis();
    b.printThis();


}