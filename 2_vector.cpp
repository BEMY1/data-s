//a.push_back(value), a.pop_back(value), a.at(pos), a.resize(value), a.insert(pos, value), a.erase(pos)     
// a.begin(), a.end()
#include <iostream>
#include <vector>
using namespace std;

void getPrint(vector<int> v){
    cout << "Size is " << v.size() << " : " ;
    for(int i=0 ; i<v.size() ; i++){
        cout << v[i];
        if(i == v.size() -1) break;
        cout << ", ";
    }
    cout << endl;
}

int main(){
    //ไม่ใส่ค่าเริ่มต้น
    vector<int> x;
    cout << "size of x : " << x.size() <<endl;


    vector<int> y = {2,3,4};
    cout << y[1] <<endl;
    y[0] = 1;
    cout << y[0] <<endl;
    // เพิ่มข้อมูลให้ vector
    cout << "size before push_back : " << y.size() <<endl;
    y.push_back(99) ;
    cout << "size after push_back : " << y.size() <<endl;
    cout << "y_new : " << y[3] <<endl;
    cout << "################################" <<endl;

    //การสร้าง vector เริ่มต้นในแบบอื่นๆ

    // สร้าง vector v1 โดยมีขนาด 10 ช่อง และ แต่ละช่องมีค่า starting value ( default int = 0 )
    vector<int> v1(10);
    getPrint(v1);

    // สร้าง vector โดยกำหนดขนาด และค่าเริ่มต้นของแต่ละช่อง
    vector<int> v2(5, 99);
    getPrint(v2);

    //สร้าง vector โดยกำหนดขนาด และค่าเริ่มต้นให้เหมือนกับ vector ตัวอื่น
    vector<int> v3(v2); //เรียกว่า copy constructor = การสร้างตัวแปรขึ้นมา แล้วใส่ค่าตัวแปรอีกตัว(ซึ่งมี type เดียวกัน) เพื่อกำหนด starting value
 
    getPrint(v3);

    //Vector Acess 
    vector<float> z1(2);
    vector<float> z2(2);
    // vector มี 2 ช่อง แต่อยากเรียกดู 4 ช่อง เพราะฉะนั้จึงมี 2 ช่องที่เป็นค่ามั่วๆ เพราะเราไปยุ่งกับ memory ในส่วนที่เราไม่ได้จองไว้
    cout << "---z1---" <<endl;
    for(int i=0 ; i<4 ; i++){
        cout << z1[i] << endl;
    }
    cout << "---z2---" <<endl;
    for(int i=0 ; i<4 ; i++){
        cout << z1[i] << endl;
    }

    //at function เข้าถึง element แต่ละตัว 
    // คล้ายๆ [] เลย แต่ at มันจะ check ให้ก่อนว่า เรากำลังจะไปใช้ memory ส่วนที่ไม่ได้จองไว้ไหม
    // check ว่าเราไป access ในพื้นที่ ที่เราไม่ได้มีสิทธิ์ไปใช้งานไหม
    // ถ้าเตือนว่า out of range แสดงว่าเราเผลอไป access ส่วนที่เราไม่มีสิทธิ์ไปใช้
        // cout << "---z1---" <<endl;
        // for(int i=0 ; i<4 ; i++){
        //     cout << z1.at(i) << endl;
        // }
        // cout << "---z2---" <<endl;
        // for(int i=0 ; i<4 ; i++){
        //     cout << z1.at(i) << endl;
        // }
    
    //Modifying Vector 
        //Resizing 
    cout << "--RESIZE--" <<endl;
    vector<int> a(5,10);
    getPrint(a);
    a.resize(7);
    getPrint(a);
    a.resize(1);
    getPrint(a);
    cout << "###########" << endl;
        //pop_back 
    cout << "--POP_BACK--" << endl;
    vector<int> b1(3,8);
    b1.pop_back();
    getPrint(b1);
    cout << "###########" << endl;

        //insert
    cout << "--INSERT--" << endl;
    b1.insert(b1.end(), 1);
    getPrint(b1); // 8 8 1
    b1.insert(b1.begin()+1, 7);  
    getPrint(b1); // 8 7 8 1

        //erase
    cout << "--ERASE--" << endl;
    b1.erase(b1.begin()+2); 
    getPrint(b1); // 8 7 1




} 