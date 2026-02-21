#include <iostream>

using namespace std;

/*
c++ coi struct như một kiểu dữ liệu(do lập trình viên định nghĩa) => dùng với con trỏ như bình thường
*/

struct nhanvien
{
    int manv;
    char tennv[100];
};

int main()
{
    nhanvien *nv1 = new nhanvien;
    *nv1 = {{101}, {"trung"}};

    // truy cap bien thanh vien cua bien con tro dung -> thay cho .

    cout << "ma nv: " << nv1->manv << endl;
    cout << "ten nv: " << nv1->tennv << endl;

    // gan pointer vao dia tri o nho cua bien cau truc(doi tuong thuong)
    nhanvien nv2 = {102, "viet"};

    nhanvien *nv3 = new nhanvien;

    nv3 = &nv2;

    cout << "ma nv: " << nv3->manv << endl;
    cout << "ten nv: " << nv3->tennv << endl;

    // thay doi gia tri nv3 thi nv2 cung thay doi

    *nv3 = {103, "huy"};

    cout << "sau khi doi!" << endl;
    cout << nv3->manv << "       " << nv3->tennv << endl;
    cout << nv2.manv << "       " << nv2.tennv << endl;
}