#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main (){
    string num;
    string num1;
    cout << "Enter number ";
    cin >> num;
    char arr[num.length()];
    strcpy(arr,num.c_str());
    for(int i = 0; i < num.length(); i++)
        cout << arr[i];
    return 0;
}