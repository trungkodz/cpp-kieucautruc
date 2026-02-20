#include <iostream>
#include <cstring>

using namespace std;
/*
struct: cho phép tự định nghĩa một kiểu dữ liệu mới bằng cách gom nhóm các biến có kiểu dữ liệu khác nhau vào với nhau
giống class nhưng dễ truy cập hơn. mặc định là public và tự động kế thừa

*/

/*
mảng cấu trúc: coi cấu trúc như một kiểu dữ liệu do ta tạo ra khai báo như các mảng thông thường
*/
// vi du
struct oto
{
    // biến thuộc tính, thành viên
    string name;
    double cost;
    // trong c++ struct cung co ham
    void thongtin()
    {
        cout << "ten: " << name << "\n"
             << "gia tien: " << cost << "$" << endl;
    }

} oto1, oto2; // biến cấu trúc(đối tượng)

struct cuahangoto
{
    string namestore;
    bool tinhtrang;
    char gioithieu[100];
    oto honda;
    oto lambogini;
    void thongtin()
    {
        cout << "namestore: " << namestore << "\n"
             << "tinh trang: " << tinhtrang << "\n"
             << "gioi thieu: " << gioithieu << endl;
        honda.thongtin();
        lambogini.thongtin();
    }
};

struct sinhvien
{
    int masv;
    char ten[100];
};

// tao ham nhap tt
void nhaptt(sinhvien mang[], int index)
{
    for (int i = 0; i < index; i++)
    {
        cout << "nhap ma cua sv " << i + 1 << ": ";
        cin >> mang[i].masv;
        cin.ignore();
        cout << "nhap ten cua sv " << i + 1 << ": ";
        gets_s(mang[i].ten, sizeof(mang[i].ten));
        cin.ignore();
    }
}

void xuattt(sinhvien mang[], int index)
{
    cout << "thong tin sinh vien!" << endl;
    for (int i = 0; i < index; i++)
    {
        cout << "msv cua sv " << i + 1 << ": " << mang[i].masv << endl;
        cout << "ten cua sv " << i + 1 << ": " << mang[i].ten << endl;
    }
}

int main()
{
    // truy cập biến thành viên <tênstruct>.<tênbiếnthànhviên>
    oto oto3;

    oto1.name = "honda";
    oto1.cost = 6000;
    oto1.thongtin();
    cout << "=======================================" << endl;
    oto3.name = "vision";
    oto3.cost = 5500;
    oto3.thongtin();
    cout << "=======================================" << endl;
    // gán giá trị theo cách 2
    oto2 = {{"ninja"}, {6070}};
    oto2.thongtin();

    cout << "=======================================" << endl;
    cuahangoto newcar;
    newcar = {{"daiphat"},
              {true},
              {"cua hang uy tin nhat vn"},
              {{"hodaplus"}, {7700}},
              {{"lambogini"}, {8000}}};

    newcar.thongtin();

    cout << "=======================================" << endl;

    // nhập thông tin từ bàn phím
    cuahangoto cuahang1;
    cout << "nhap gioi thieu cua hang: ";
    gets_s(cuahang1.gioithieu, 100);

    cout << "=======================================" << endl;

    // sao chep thông tin đối tượng này cho đối tượng khác

    cuahangoto cuahang2 = cuahang1; // chúng quản lý 2 ô nhớ khác nhau
    cout << "thong tin cua hang 2: " << cuahang2.gioithieu << endl;

    // khai báo mảng cấu trúc
    int index = 2;
    sinhvien mang[index];
    nhaptt(mang, index);
    xuattt(mang, index);
    return 0;
}