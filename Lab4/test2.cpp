#include <iostream>
using namespace std;
int main (){
    int score;
    cout << "Input score ";
    cin >> score ;
    if(score>=80){cout << "A ";}
    else if(score>=70){cout << "B ";}
    else if(score>=60){cout << "C";}
    else if(score>=50){cout << "D";}
    else {cout << "F";} 
    return 0;
}