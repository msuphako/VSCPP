#include <iostream>
using namespace std;
int main(){
    int area,price,area_left,total;
    char type,size;
    cout << "Enter area : ";
    cin >> area;
    cout << "Enter Type material : ";
    cin >> type;
    //-------------------------------------------------------------
    if(area > 100 ){
        size = 'L';
        area_left = area - 60;
        price = 200000 + 150000 + area_left * 2000;
    }else if(area > 40){
        size = 'M';
        area_left = area - 40;
        price = 200000 + area_left * 3000;
    }else if(area >= 20){
        size = 'S';
        price = 200000;
    }else{
        cout << "Error";  
        return 0;   
    }
    //-------------------------------------------------------------
    if(type == 'B' || type == 'b'){
        if(size == 'S'){
          total =  area * 5000 ; 
        }
        else if(size == 'M'){
          total =  area * 7500 ; 
        }
        else if(size == 'L'){
          total =  area * 15000 ; 
        }else{
        cout << "Error"; 
        return 0;   
        }
    }
    else if(type == 'G' || type == 'g'){
        if(size == 'M'){
          total =  area * 10000 ; 
        }
        else if(size == 'L'){
          total =  area * 20000 ; 
        }else{
        cout << "Error"; 
        return 0; 
        }
    }
    else if(type == 'P' || type == 'p'){
           if(size == 'M'){
          total =  area * 15000 ; 
        }
        else if(size == 'L'){
          total =  area * 30000 ; 
        }else{
        cout << "Error";  
        return 0; 
        }
    }else{
        cout << "Error";
        return 0;   
    }
    //-------------------------------------------------------------
    cout << "The house will cost " << price + total << " to build " ;
     return 0;
}