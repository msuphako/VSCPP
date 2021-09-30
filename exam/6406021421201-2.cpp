#include <iostream>
using namespace std;
int main(){
    int books,toys,models,stationery;
    float total_week,payment = 1000;
    cout << "Input number of Books: ";
    cin >> books;
    cout << "Input number of Toys: ";
    cin >> toys;
    cout << "Input number of Model: ";
    cin >> models;
    cout << "Input number of Stationery: ";
    cin >> stationery;
    books = books * 120;
    toys = toys * 80;
    models = models * 50;
    stationery = stationery * 15;
    total_week = books + toys + models + stationery;
    if(total_week >=100000){
        payment = payment + (total_week * 10 / 100);
    }else if(total_week >=10000){
        payment = payment + (total_week * 5 / 100);
    }else if(total_week >=5000){
        
    }else if (total_week >= 1){
        payment = payment - (payment * 10 / 100);
    }else if (total_week == 0 ){
        payment = payment - (payment * 50 / 100);
    }else{
        cout << "Error ";
        return 0;
    }
    cout << "Payment = " << payment;
    return 0 ;
}