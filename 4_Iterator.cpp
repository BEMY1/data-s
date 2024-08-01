//Iterator คือ สิ่งที่เอาไว้ระบุตำแหน่ง element ใน vector 
//We can use "auto" keyword to automatically define a type of a variable
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> v1 = {0, 10, 20, 40, 30, 50, 30};
    vector<float> v2 = {0, 1.99, 34.5, 23.5,43.6};

    vector<int>::iterator it1 = v1.begin()+3; //it1 = 0 + 3 = 3
    vector<float>::iterator it2 = v2.end(); //it2 = v2.end() = 5

    //getting value at iterator by using "*" operator 
    cout << *v1.begin() <<endl;
    cout << *v2.begin() <<endl;
    cout << it2-v2.begin() <<endl;
    cout << *it1 <<endl;
    cout << *it2 <<endl; // มีค่า 0 เพราะ iterator ชี้ไปด้านหลัง 43.6 ซึ่งไม่มีค่าอยู่แล้ว 
    cout << *(it2-1) <<endl; // มีค่าเท่ากับ 43.6 เพราะ iterator ชี้ไปที่ด้านหลัง 23.5 ซึ่งก็คือ 43.6 


    //iterator arithmetics = iterator เลขคณิต
    vector<int>::iterator it3 = it1+2; // it3 ชี้ถัดจากit1 อยู่ 2 ตำแหน่ง
    cout << *it3 <<endl;
    cout << (it3 - it1) <<endl; //ผลต่างของค่าตำแหน่ง จาก it3 และ it1 

    cout << "Before : " << *it2 <<endl;
    it2--; //ให้ iterator ถอยลงมา
    cout << "After : " << *it2 <<endl;


    // ไม่สามารถจัดการ iterator คนละ vector ได้ เช่น 
    // cout << (it2-it1) <<endl; //cannot be done 

    //ไล่เรียกดูทุก element โดยใช่ iterator
    cout << "----V1----" <<endl;
    for(auto it =v1.begin() ; it<v1.end() ; it++){
        cout << it-v1.begin() << ": " << *it <<endl;
    }

    cout << "----V2----" <<endl;
    auto it = v2.begin();
    // ใช้ != แทน < จะเหมาะสมกว่า เนื่องจากใช้ได้กับทุกๆ iterator ใน data structure อื่นๆด้วย
    while(it != v2.end()){
        cout << it-v2.begin() <<": " << *it <<endl;
        it++;
    }
}