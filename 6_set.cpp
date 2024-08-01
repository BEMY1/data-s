//set เอาไว้เก็บข้อมูลชนิดเดียวกัน แต่มีค่าแตกต่างกัน (ชนิดเดียวกัน แต่ห้ามเป็นตัวเดียวกัน)
// data ใน set ต้อง เปรียบเทียบกันได้ เช่น ความมากน้อย  
// ในการใส่ข้อมูลเข้าไป set ทำได้ช้ากว่า vector แต่ set จะเร็วกว่า vector มากๆ ในการหาว่ามีของชิ้นนั้นใน set ไหม 
// set ช้ากว่า vector : การใส่ข้อมูล
// set เร็วกว่า vector : การหาว่าเรามีข้อมูล/ของชิ้นนั้นไหม 
                    // --> เมื่อ set สามารถ check ได้ว่ามีข้อมูลนั้นไหมได้เร็ว เลยทำให้ set สามารถลบข้อมูลได้เร็วกว่า vector ด้วย
    // set : slow insert
    // set : fast look up and erase
// iterator ของ set จะวิ่งจากข้อมูลตัวน้อย ไปหาข้อมูลตัวมาก เช่น เราใส่ 3 1 5 ตามลำดับ --> iterator ของ set จะวิ่งจาก 1 ไป 3 ไป 5
    //--> fast sorting 
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> x = {4,1,3,2,1,1,3,4};
    //สามารถสร้าง set ได้อีกแบบ
    set<int> s=(x.begin(), x.end());
    // 1 2 3 4 
    cout << "Starting Value : " ;
    for(auto v : x) cout << v << " ";
    cout << endl;

    cout << "size of set (Before) : " << x.size() <<endl;
    x.insert(10); // 1 2 3 4 10
    x.insert(5); // 1 2 3 4 5 10 
    x.erase(3);  // 1 2 4 5 10 --> ใส่ตัวที่จะลบไปได้เลย  เพราะ set มันหาตัวที่จะลบได้เร็ว มันเลยยอมให้เราสั่งลบตัวนั้นได้เลย ต่างจาก vector ที่เราต้องกำหนด pos ที่จะลบเอง

    cout << "size of set (After) : " << x.size() <<endl;
    cout << "member of set : ";
    for(auto v : x) cout << v << " ";
    cout << endl;
    // เขียนได้อีกแบบ
    // for(auto it=x.begin() ; it!=x.end() ; it++) cout << *it << " ";
    // cout << endl;
}