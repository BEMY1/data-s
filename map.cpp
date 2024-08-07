// "map" is "dict" in python
// map ได้ property เดียวกับ set ดังนั้นมันจะวิ่งจากค่ามาก ไป ค่าน้อย
// map --> associative == จับคู่ได้ เช่น จับคู่ int with string 

// map ประกอบด้วย -> key type
//                -> mapped type

// เวลาเราเรียก map ที่มี key type ที่เราไม่เคยเห็นมาก่อน --> c++ มันจะแอบไปสร้างตัวใหม่ให้ และจับคู่กับค่า default ของ mapped type ให้เลย 
// ค่า default ของ map type is 0 
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> s ;
    s["Tom"] = 10;
    s["Jerry"] = 20;

    cout << "Size is : " << s.size() <<endl;
    
    // ถ้าใส่ของที่ไม่มีการจับคู่ในแมพเข้าไป --> map จะไปจับคู่สิ่งนั้นกับค่า default ของ mapped type นั่นคือ 0
    cout << s["Phalat"] << endl;
    cout << "Size is : " << s.size() <<endl;
    cout << "######################" <<endl;

    // output map ทุกตัวออกมา 
    // จะเห็นว่า map มี 3 ตัว โดยมี key type "Phalat" ที่จับคู่กับ 0 เพิ่มมา --> เพราะเราไปเรียกหามัน map เลยสร้างใหม่ให้ โดยใส่ค่า default ให้เลย
    for(auto it=s.begin() ; it != s.end() ;it++) cout << it->first << " mapped to " << (*it).second << endl;

    // สร้าง map s["Hello"] ให้จับคู่กับ 0 ก่อน จากนั้นก็เพิ่มค่าขึ้น 1 หน่วย เป็น == 1
    s["Hello"]++ ;
    cout << "###########################" <<endl;
    for(auto x : s) cout << x.first << ", " << x.second << endl;
    cout << "Size is : " << s.size() <<endl;
    cout << "###########################" <<endl;


// checking if map has this key?
    map<int,string> y;
    y[10] = "Tom";
    y[20] = "Jerry";

    map<int,string>::iterator check;
    if((check = y.find(10)) != y.end()) cout << check->first << " is map to " << check->second << endl;
    else cout << "Not Found" <<endl;

    //The WRONG way to check if map has this key?
    // If y[10] doesn't exist in map --> c++ will create map y[99] pair with default mapped key that is " " 
    if(y[99] == "") cout << "exist" <<endl;
    else cout << "Not exist" <<endl;
    cout << "###########################" <<endl;
    


    //สามารถลบข้อมูลใน map ได้ โดยเพียงแค่สั่งลบตัว key type 
    cout << "Erase key type for delete element " << endl;
    map<string,bool> z;
    z["Tim"] = 1;
    z["John"] = 0;
    for(auto u : z) cout << u.first << ", " << u.second <<endl;
    cout<< "###########" <<endl;
    z.erase("Tim") ;
    for(auto u : z) cout << u.first << ", " << u.second <<endl;
}


// สรุป
// 1. map ทำตัวเหมือน set == วิ่งจากค่าน้อย ไป ค่ามาก / หาได้เร็ว / ลบได้เร็ว
// และของที่ใส่(สนใจเฉพาะ key type (mapped type อาจจะไม่จำเป็นต้องเรียงได้))ต้องเรียงได้ / เปรียบเทียบการมากน้อยได้ (สมบัติเหมือน set)
// 2. map ต้องใส่ค่าเป็นคู่ นั่นคือ "Key type" and "Mapped type" --> เพื่อที่จะทำการจับคู่กัน โดย เริ่มจาก Key type ไปหา Mapped type 
// 3. เวลาเราเรียกหา map ที่ไม่เคยมี Key type นั้นมาก่อน --> c++ จะทำการสร้างตัวใหม่ที่มี key type นั้นให้เลย โดยให้จับคู่กับ default mapped type นั่นคือ 0

// !! map เปรียบเหมือน Array ที่มี index เป็น string 
// !!!!! แต่ความจริง Map isn't Array