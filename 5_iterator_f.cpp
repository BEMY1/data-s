#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void line(){
    cout << "##################" <<endl;
}

int main() {
   vector<int> v1 = {3, 0,1,2,4,-3,9,8};
   vector<float> v2 = {10.2, -4, 0.13, 3.14, 2.73};

   //min & max_element f
   auto it1 = min_element(v1.begin(), v1.end());
   auto it2 = max_element(v2.begin()+2, v2.end());
   cout << *it1 << endl << *it2<<endl;
   line();
// ############################################################
   //range-based for loop = การเข้าถึงทุก element / วิ่งไล่ทุก element 
   vector<string> w1 = {"Phalat", "Tom", "Jerry"};

   for(string x : w1){
   // x is a copy of each element in w1
   // x จะไป copy ค่าจาก w1 แต่ละตัว ทีละตัว --> เป็นสำเนา เพราะฉะนั้นจะเอา x ไปทำอะไรก็ได้ w1 ไม่เปลี่ยน
    cout << x <<endl;
   }
    // จะสังเกตว่า w1 จะไม่เปลี่ยนไป แม้ว่าเราจะทำอะไรกับ x ก็ตาม
    cout << "This is ---> "<< w1[1] << endl;
   cout << endl;
    for(auto &x : w1) { 
        // x is element of v1 --> x คือ element แต่ละตัวใน vector เลย 
        x.replace(0,2, "--");
        cout << x <<endl;
    }
    //จะสังเกตว่า w1 ได้เปลี่ยนไป เพราะเราได้ทำอะไรบางอย่างกับ x 
    cout << "This is ---> "<< w1[1] << endl;
   line();
// ############################################################
    
    // iterator invalidate --> ถ้าเราไปปรับเปลี่ยน vector แล้ว iterator เดิมจะใช้อ้างอิงไม่ได้อีกต่อไป 
    // --> ถ้าเรายิ่ง modify vector --> iterator เดิมก็ยิ่งพัง ยิ่งใช้ไม่ได้     

    // สรุป ถ้าเราไป modify จน ข้อมูล ใน vector --> มีโอกาสที่ iterator เดิมของเราจะถูก invalidate ไป
    // ยกเว้นบางกรณีที่เดิมเรามีขนาดใหญ่ แต่เราไป modify ให้เล็กลง แล้วมันไม่ไปโดน iterator ด้วย 
    vector<int> d = {10,20};
    vector<int>::iterator it = d.end()-1;
    cout << "Before modify vector : "<< *it <<endl; 
    d.resize(10);
    cout << "After modify vector : " << *it <<endl; 
    for(int x : d) cout << x << " ";
    cout << endl;

}