#include <iostream>
using namespace std;
int main(){
    int price,kilo,kilo_left; 
    cout << "input kilo : ";
    cin >> kilo;
    if (kilo >= 0 ){
        price = 40;
    }
    if(kilo >= 2 ){
        if(kilo>=10){
            price += 45;
        }else{  
            price += (kilo - 1) * 5;
        }
    }
    if(kilo >= 11 ){
        if(kilo>=15){
            price += 20;
        }else{
            price +=  (kilo - 10)  * 4;
        }
    }
    if(kilo >= 16 ){
        if(kilo>=20){
            price += 15;
        }else{
            price +=  (kilo - 15) * 3;
        }
    }
    if(kilo >= 21){
            price +=  (kilo - 20) * 2;
    }


  
    cout <<"total price : " << price ;
}