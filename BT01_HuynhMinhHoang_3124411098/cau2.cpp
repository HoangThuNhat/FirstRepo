//Họ tên: Huỳnh Minh Hoàng
//MSSV: 3124411098

#include <iostream>
#include <math.h>
using namespace std;

void giaiPTTrungPhuong(float a, float b, float c) {
    if (a == 0) {
        // Phương trình không phải phương trình trùng phương
        cout << "Khong phai phuong trinh trung phuong!" << endl;
        return;
    }

    // Đặt t = x^2
    float delta = b * b - 4*a*c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem. " << endl;
    } else if (delta == 0) {
        float t = -b / (2 * a);
        if (t >= 0) {
            float x = sqrt(t);
            cout << "Phuong trinh co 2 nghiem: " << -x << " " << x << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        } // biến đổi pt trùng phương về pt bậc 2 để dễ tính toán
    } else {
        float t1 = (-b + sqrt(delta)) / (2 * a);
        float t2 = (-b - sqrt(delta)) / (2 * a);
        if (t1 >= 0 && t2 >= 0) { // neu phuong trinh co 2 nghiem duong
            float x1 = sqrt(t1);
            float x2 = -sqrt(t1);
            float x3 = sqrt(t2);
            float x4 = -sqrt(t2);
            cout << "Phuong trinh co 4 nghiem: " << x1 << " " << x2 << " " << x3 << " " << x4 << endl; 
        } else if (t1 >= 0) { // phuong trinh chi co 1 nghiem duong 
            float x1 = sqrt(t1);
            float x2 = -sqrt(t1);
            cout << "Phuong trinh co 2 nghiem: " << x1 << " " << x2 << endl;
        } else if (t2 >= 0) {
            float x1 = sqrt(t2);
            float x2 = -sqrt(t2);
            cout << "Phuong trinh co 2 nghiem: " << x1 << " " << x2 << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
}


int main() {
    float a, b, c;
    cout<<"Nhap a: "<<endl; cin>>a;
    cout<<"Nhap b: "<<endl;cin>>b;
    cout<<"Nhap c: "<<endl;cin>>c;
    giaiPTTrungPhuong(a, b, c);
    return 0;
}