#include <iostream>

using namespace std;

//static :정적 <-> 동적
//색깔예제 시작(R G B)
class Color{
public:
    Color():r(0),g(0),b(0){}
    Color(float r, float g, float b):r(r),g(g),b(b){}

    //2. 넣어준 mix 컬러는 static을 선언해주고
    static Color MixColor(Color a, Color b){
        Color res((a.r+b.r)/2 ,(a.g+b.g)/2, (a.b+b.b)/2); //<<<   객체안으로 들오왔기때문에 private로 접근이 가능하다
        return res;
    }


    float getR(){
        return r;
    }
    float getG(){
        return g;
    }
    float getB(){
        return b;
    }
private:
    float r;
    float g;
    float b;
};

//1.mixcolor은 Color과 밀접한 관계를 가지고있다. 그래서 Color 객체 안에 넣어준다.
/*Color MixColor(Color a, Color b){
     Color res((a.getR()+b.getR())/2 ,(a.getG()+b.getG())/2, (a.getB()+b.getB())/2);
    return res;
}*/


int main() {
    Color blue (0,0,1);
    Color red (1,0,0);
    //3. Color의 static의 mix컬러를 접근해주기위한 선언을 해준다 Color::선언!
    Color purple =Color::MixColor(red,blue);

    cout << "r="<< purple.getR() << "g=" << purple.getG() << "b="<< purple.getB()<< endl;
}
