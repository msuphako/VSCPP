/*    Program 2_7: Output the values of uninitialized objects  */
#include<iostream>
using namespace std;
int main(){
    float f = 2.8;int i = 120;char c = 'A';double d = 2e5;
    cout << "f value is "<< f << endl;
    cout << "i value is "<< i << endl;
    cout << "c value is "<< c << endl;
    cout << "d value is "<< d << endl;
    return(0);
    }