#include <iostream>
#include <string>
using namespace std;
int main(){
    pair<int,float> x; // first is int , second is float.
    x.first = 10;
    x.second = 5.55;
    cout << x.first << " "  << x.second <<endl;
    cout << "##########################" <<endl;

    pair<int,float> y;
    y = x;
    cout << y.first << " " << y.second + 20 <<endl;
    cout << "##########################" <<endl;

    // ถ้าไม่กำหนดค่าเริ่มต้น มันจะแสดงค่า default ของแต่ละ type ออกมา
    pair<bool, int> p;
    cout << p.first << endl << p.second <<endl;
    cout << "##########################" <<endl;

    //function "make_pair()"
    pair<bool,int>p2 ;
    // ถ้า type ของข้อมูลที่เรากำหนดตรงกัน มันจะใส่ค่าให้เลย
    p2 = make_pair(true,25); 
    cout << p2.first << " " <<p2.second <<endl;
    cout << "##########################" <<endl;

    // สร้าง p3 โดยให้ค่าเริ่มต้นเป็น p2
    pair<bool,int> p3(p2);
    cout << "p3 : " << p3.first << " " << p3.second<<endl;
    cout << "##########################" <<endl;

    // pair ซ้อน pair
    pair<pair<float,int>,string> p4 = {{11.11,20},"Hello"};
    cout << "p4 " << p4.first.first << " " << p4.first.second << " "<< p4.second <<endl;

    

}