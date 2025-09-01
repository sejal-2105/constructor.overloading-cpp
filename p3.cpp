#include<iostream>
using namespace std;
class area{
    float len;
    int bre;
    public:
    area(){
        len=10;
        bre=20;
    }
    area(float l, int b){
        len=l;
        bre=b;
    }
    area(area &l1){
        len=l1.len;
        bre=l1.bre;
    }
    void disp(){
        float ar=len*bre;
        cout<<ar<<endl;
    }
};
int main(){
    area a1, a2(15.6,10), a3(a1);
    a1.disp();
    a2.disp();
    a3.disp();
    return 0;
}