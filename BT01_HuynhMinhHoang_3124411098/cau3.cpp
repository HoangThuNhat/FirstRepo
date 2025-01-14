//Họ tên: Huỳnh Minh Hoàng
//MSSV: 3124411098

#include <iostream>
using namespace std;
const int MAXN = 1000;
void swap(int &a, int &b) {  // đổi vị trí giữa các phần tử
    int temp = a;
    a = b;
    b = temp;
}

void SapXep(int arr[], int n) { // Hàm sắp xếp theo thứ tự tăng dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // gọi hàm swap để thực hiện việc hoán đổi các phần tử trong dãy
            }
        }
    }
}

void TimPhanTuChung(int x[], int nx, int y[], int ny, int z[], int nz) {
    SapXep(x, nx);
    SapXep(y, ny);
    SapXep(z, nz); // gọi hàm sắp xếp 
    int dem = 0;
    int i = 0, j = 0, k = 0;
    while (i < nx && j < ny && k < nz) {
        if (x[i] == y[j] && y[j] == z[k]) { // tim phan tu chung
            cout << x[i] << " ";
            i++;
            j++;
            k++;
            dem++; 
        } else if (x[i] < y[j]) {
            i++;
        } else if (y[j] < z[k]) {
            j++;
        } else {
            k++;
        }
    }
    cout<<"So phan tu chung cua ba day la: "<<dem<<endl;
}
void test(){
    int x[MAXN],y[MAXN],z[MAXN];
    int nx,ny,nz;
    nx = 5; x[0] = 9; x[1] = 8; x[2] = 6; x[3] = 2; x[4]=5;
    ny = 4; y[0] = 5; y[1] = 6; y[2] = 7; y[3] = 8;
    nz = 4; z[0] = 7; z[1] = 8; z[2] = 2; z[3] = 3;
    cout<<"Cac phan tu chung ba day la: ";
    TimPhanTuChung(x, nx, y, ny, z, nz);

}   

int main() {
    test();
    int x[MAXN], y[MAXN], z[MAXN];
    int nx, ny, nz;
    cout<<"HuynhMinhHoang_3124411098"<<endl;
    cout << "Nhap so luong phan tu cua day x: ";
    cin >> nx;
    cout << "Nhap cac phan tu cua day x: ";
    for (int i = 0; i < nx; i++) {
        cin >> x[i];
    }

    cout << "Nhap so luong phan tu cua day y: ";
    cin >> ny;
    cout << "Nhap cac phan tu cua day y: ";
    for (int i = 0; i < ny; i++) {
        cin >> y[i];
    }

    cout << "Nhap so luong phan tu cua day z: ";
    cin >> nz;
    cout << "Nhap cac phan tu cua day z: ";
    for (int i = 0; i < nz; i++) {
        cin >> z[i];
    }
    cout << "Cac phan tu chung cua ba day la: "<<endl;
    TimPhanTuChung(x, nx, y, ny, z, nz);

    return 0;
}