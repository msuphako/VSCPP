#include <iostream>
using namespace std;
int isValidAddress(int);
string addressClass(int);
int main(){
    int ip;
    do{
    cout << "Enter IP Address : ";
    cin >> ip;
    }while(!isValidAddress(ip));
    string type = addressClass(ip);
    cout << "Type : " << type ;
    return 0;
}
int isValidAddress(int ip){
    if(ip>0 && ip<224){
        return true;
    }else{
        return false;
    }
}
string addressClass(int ip){
    string type;
    if(ip>=192){
        type = "C";
    }
    else if(ip>=128){
        type = "B";
    }
    else if(ip>=1){
        type = "A";
    }
        return type;
}