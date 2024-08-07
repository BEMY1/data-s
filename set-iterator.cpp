#include <iostream>
#include <set>
using namespace std;

int main(){
    // สร้าง pair ใน set ได้ แต่ของใน pair ต้องเปรียบเทียบกันได้
    set< pair<string,int> > s = { {"Tom", 1}, {"Jerry", 0} , {"Tom", 19} ,{"Phalat", 53}};

    for(auto &x : s){
        cout << x.first << ", " << x.second <<endl;
    }


    cout << "--find--" <<endl;
    auto it = s.find({"Tom", 19});
    // it is iterator and *it is pair
    // " . " is more important than " * ", so we need to use " () ".
    cout << (*it).first << ", " << (*it).second << endl;
    it--;
    it--;
    // we can use this syntax instead of previous syntax.
    // เป็นการชี้ตัวให้ iterator เลย
    cout << it->first << ", " << it->second << endl;
    it++;
    cout << it->first << ", " << it->second << endl;
}