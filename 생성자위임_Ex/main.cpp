#include <iostream>

using namespace std;
class Time{
public:
    int h,m,s; //간단한 변수선
    //생성자 초기화
    Time():h(0),m(0),s(0){}
    //생성자 초단위가 들어왔을때
    Time(int s_):Time(){//위임한 Time() 를 호출한다. 즉 초단위만 입력해줘도 시간,분을 0으로 초기화시켜준다.
        s=s_;
    }
    //생상자 분,초가 들어왔을때
    Time(int m_, int s_):Time(s_){//위임한 Time(s_)를 호출한다.  즉 초단위만 입력해줘도 시간을 0으로 초기화시켜준다.
        m=m_;
        s=s_;
    }
    //생성자 시간,분,초가 들어왔을때
    Time(int h_,int m_,int s_):Time(m_,s_){//위임한 Time(m_,s_)를 호출한다.
        h=h_;
        m=m_;
        s=s_;
    }

};
int main() {
    Time t1(5);
    Time t2(45,3);
    Time t3(1,33,7);


    cout<<"time은 " << t1.h<<":"<<t1.m<<":"<<t1.s<<endl;
    cout<<"time은 " << t2.h<<":"<<t2.m<<":"<<t2.s<<endl;
    cout<<"time은 " << t3.h<<":"<<t3.m<<":"<<t3.s<<endl;
    //결과값:
    //time은 0:0:5
    //time은 0:45:3
    //time은 1:33:7
}