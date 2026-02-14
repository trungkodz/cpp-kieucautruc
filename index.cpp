#include <iostream>

using namespace std;
/*
struct: cho phép tự định nghĩa một kiểu dữ liệu mới bằng cách gom nhóm các biến có kiểu dữ liệu khác nhau vào với nhau
giống class nhưng dễ truy cập hơn. mặc định là public và tự động kế thừa

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

int main()
{

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
    return 0;
}