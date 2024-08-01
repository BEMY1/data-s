// at, push_back, pop_back, resize, insert, erase
// find, sort --> Need to use with "iterator" and Need to include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void getPrint(vector<int> v){
    cout << "Vector size is " << v.size() << " : " ;
    for(int i=0 ; i<v.size() ; i++) {
        // at function ดีกว่า v[i] ตรงที่ at_f จะ check ให้ก่อนว่าเราจะไม่ไป access พื้นที่ที่ไม่ได้จอง
        cout << v.at(i) ;
        if(i==v.size()) break;
        cout << ", ";
    }
    cout << endl;
}

int main(){
    //Modifying Vector 
        //Resizing 
    cout << "--RESIZE--" <<endl;
    vector<int> a(5,10);
    getPrint(a);
    a.resize(1);
    getPrint(a);
    cout << "###########" << endl;
    // ###################################################################################
    cout << "--PUSH_BACK--" <<endl;
    vector<int> b1(2,8);
    b1.push_back(8);
    getPrint(b1);
    cout << "###########" << endl;
    // ###################################################################################
        //pop_back 
    cout << "--POP_BACK--" << endl;
    b1.pop_back();
    getPrint(b1);
    cout << "###########" << endl;
    // ###################################################################################

        //insert
    cout << "--INSERT--" << endl;
    b1.insert(b1.end(), 1);
    getPrint(b1); // 8 8 1
    b1.insert(b1.begin()+1, 7);  
    getPrint(b1); // 8 7 8 1
    cout << "###########" << endl;
    // ###################################################################################

        //erase
    cout << "--ERASE--" << endl;
    b1.erase(b1.begin()+2); 
    getPrint(b1); // 8 7 1
    cout << "###########" << endl;
    // ###################################################################################

    //Function that use with iterator
        //find(a,b,c) : find "c" from "a" to "before b"
            //if found --> return iterator(position)
            //if not found --> return b
    cout<< "--FIND--" <<endl;
    vector<int> c = {9,-1,3,7,5,2,1,4};
    if(find(c.begin(), c.end(), 5) != c.end()) cout << "Found" <<endl;
    else cout << "Not Found" <<endl;

    if(find(c.begin(), c.begin()+3, 3) != c.begin()+3) cout << "FOUND" <<endl;
    cout << "###########" << endl;
    // ###################################################################################

        //sort(a,b) : sort eveything from "a" to "before b"
    cout << "--SORT--" <<endl;
    cout << "Before sort : " ;
    getPrint(c);
    sort(c.begin(), c.end());
    cout << "Before sort : " ;
    getPrint(c);
    cout << "###########" << endl;
}