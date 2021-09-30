#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int chk;
    do{
    cout << "Input an integer : ";
    cin >> num;
    if(num>= 5 && num <=10){
        break;
    }else{
     cout << "*enter between 5 - 10*" <<endl ;
    }
    }while(true);
    for(int i=1;i<=num;i++){
        cout << "*";
        if(i==1 || i==num){
        cout << "*****";
        }else{
        cout << "     ";
        }
        cout << "*" << endl;
    }

}