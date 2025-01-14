//Họ tên: Huỳnh Minh Hoàng
//MSSV: 3124411098

#include <iostream>
#include <math.h>
using namespace std;
long giaiptbac2(float a, float b, float c, float &x1, float &x2){ //hàm giải phương trình bậc 2
    int sn = -1;
    if (a == 0){
        if (b == 0){
            if (c == 0) // phương trình có vô số nghiệm
                sn = -1;
             else sn = 0; // phương trình vô nghiệm
        } else //bx + c = 0
        sn = 1; // phươn trình có một nghiệm x = -c/b
        x1 = -c/b;
    } else {
        float delta = b*b-(4*a*c);
        if (delta < 0) sn = 0; // phương trình vô nghiệm
        else if (delta == 0){
            sn = 1; // phươn trình có một nghiệm x = -b/(2*a);
            x1 = -b/(2*a);
        }else {
            sn = 2;
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            if (x1 > x2){ //sắp xếp các nghiệm theo thứ tự tăng dần
                float temp = x1;
                x1=x2;
                x2 = temp;
            }
        }
    }
    return sn;
}
void test1() { // hàm kiểm tra các trường hợp có thể xảy ra
    float a1, b1, c1;
    int sn1;
    float x1, x2;

// trường hợp a,b,c = 0 --> phương trình vô sô nghiệm
    a1 = 0; b1 = 0; c1 = 0; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    cout << "---" << endl;

// delta < 0 nên phương trình vô nghiệm
    a1 = 0; b1 = 0; c1 = 12; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    a1 = 1; b1 = 3; c1 = 11; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    cout << "---" << endl;

// delta > 0 nên có 2 nghiệm phân biệt
    a1 = 0; b1 = 6; c1 = 3; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    a1 = 1; b1 = -3; c1 = 2; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    cout << "---" << endl;

    a1 = 1; b1 = -6; c1 = 8; sn1 = giaiptbac2(a1, b1, c1, x1, x2);
    cout << "sn=" << sn1 << ", x1=" << x1 << ", x2=" << x2 << endl;
    cout << "---" << endl;
}
int main(){
    float a,b,c;
    float x1,x2;
    test1();
    cout<<" Nhap a: "; cin>>a;
    cout<<" Nhap b: "; cin>>b;
    cout<<" Nhap c: "; cin>>c;
    int sn;
    sn = giaiptbac2(a,b,c,x1,x2);
    if (sn == -1)
    cout<<"Phuong trinh vo so nghiem."<<endl;
    if (sn == 0)
    cout<<"Phuong trinh vo nghiem."<<endl;
    else {
        cout<<"Phuong trinh co "<<sn<<" nghiem: "<<endl;
        cout<<"x1 = "<<x1<<endl;
        if (sn == 2 )
        cout<<"x2 = "<<x2<<endl;
    }
    return 0;
}