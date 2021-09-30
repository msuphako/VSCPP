#include <iostream>
using namespace std;
int main(){
    int std = 20;
    int score[20];
    int grade[20];
    int classroom[20];    
    int homework[20];    
    int midterm[20];    
    int final[20]; 
    for(int i=1;i<=20;i++){
        cout << "Enter classroom ";
        cin >> classroom[i];
        cout << "Enter homework ";
        cin >> homework[i];
        cout << "Enter midterm ";
        cin >> midterm[i];
        cout << "Enter final ";
        cin >> final[i];
        int total = classroom[i]+homework[i]+midterm[i]+final[i];
        cout << "Total : " << total << endl;
        if(total>=80){
        cout << "Grade A " << endl;
        }else if(total>=70){
        cout << "Grade B " << endl;
        }else if(total>=60){
        cout << "Grade C " << endl;
        }else if(total>=50){
        cout << "Grade D " << endl;
        }else{
        cout << "Grade F " << endl;
        }
    }   
        cout  << "*************************";
}