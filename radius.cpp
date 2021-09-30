#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double radius;
    int num;
    cout << "enter radius : " ;
    cin >> radius;
    cout << "1.)Calculate the circumference of circle" << endl;
	cout << "2.)Calculate the Area of circle" << endl;
	cout << "3.)Calculate the volume of phere" << endl;	
    cout << "enter choice: " ;
    cin >> num;
    switch (num) {
        case 1 : radius = 2.0 * 3.14159 * radius;
        break;

        case 2 : radius = 3.14159 * pow(radius,2);
        break;

        case 3 : radius = (4.0/3.0) * 3.14159 * pow(radius,3);
        break;

    }
     cout << "Volume of circle is " << radius ;
}