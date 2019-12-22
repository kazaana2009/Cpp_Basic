#include <iostream>
//매게변수의 상수화.(모든 함수가 사용할수 있음) //메소드의 들어오는 파라미터에 상수화를 해주는 방식
//메서드의 상수화. (멤버 메소드-한정된 느낌)  //const
using namespace std;

class Account{
private:
    int money;
public:
    //생성자 생성
    Account() :money(0){};
    Account(int money): money(money){};

    void Deposit(const int d){  //<<메게변수의 상수화
        money+=d;
        cout << d<< "원을 입금했다"<< endl;
    }
    void Draw(const int d){  //메게변수의 상수화
        if(money>d){
            money-=d;
            cout << d <<"원을 인출 헀다"<< endl;
        }
    }
    int ViewMoney() const {  //const 란 메스드를 상수화 해주는 명령어 (값이 변할수가 없다)
        return money;
    }

};


int main() {
    Account test (100);//초기자본 저장

    test.Deposit(20); //예금
    test.Draw(10); //출금
    cout<< test.ViewMoney() << endl;
}
