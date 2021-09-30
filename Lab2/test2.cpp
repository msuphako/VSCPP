#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float numa,numb,numc;
    float ans1,ans2;
     cout << "AX^2 + BX + C = 0" << endl;
     cout << "Enter number A :" ;
     cin >> numa;
     cout << "Enter number B :" ;
     cin >> numb;
     cout << "Enter number C :" ;
     cin >> numc;
     ans1 = numb*numb - (4*numa*numc);
    //  ans1 = (-numb + ans1) / (2*numa);
     cout << "sqrt( "<<ans1<<" ) " <<  endl;
     return (0);
}