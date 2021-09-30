#include <iostream>
#include <string.h>
using namespace std;

template <class T>
void CalGrade( T &c, T &h , T &t , T &m, T &f);

template <class T>
T CalTotal( T c, T h , T t , T m, T f);

template <class T>
string Chkscore( T total);

template <class T,class P>
void Print( T &total, P &Grade);

int main(){
    int std = 1;
    int classroom[20] , homework[20] , test[20] , midterm[20] , final[20];
    int total[20];
    string Grade[20];
    for ( int i = 0; i < std; i++)
    {
        CalGrade<int>(classroom[i],homework[i],test[i],midterm[i],final[i]);
        total[i] = CalTotal<int>(classroom[i],homework[i],test[i],midterm[i],final[i]);
        Grade[i] = Chkscore<int>(total[i]);
		Print<int,string>(total[i],Grade[i]);
		
    }
    return(0);
}
template<class T>
T CalTotal( T c, T h , T t , T m, T f)
    {
    T total;
     total = c + h + t + m + f;
    return(total);
    }

template<class T>
string Chkscore(T total){
    string Grade;
    if(total >= 80){
        Grade = "A"; 
    }else if (total >= 70){
        Grade = "B"; 
    }else if (total >= 60){
        Grade = "C"; 
    }else if (total >= 50){
        Grade = "D"; 
    }else  Grade = "F"; 
    return(Grade);
}
template<class T,class P>
void Print( T &total, P &Grade ){
    cout <<"Total Score : " << total << endl;
	cout <<"Grade : " << Grade <<endl;
	cout << "**************************" << endl;
    }
template<class T>
void CalGrade( T &c, T &h , T &t , T &m, T &f)
    {
        cout << "Enter Classroom = ";
        cin >> c;
        cout << "Enter Homework = ";
        cin >> h;
        cout << "Enter Test = ";
        cin >> t;
        cout << "Enter Midterm = ";
        cin >> m;
        cout << "Enter Final = ";
        cin >> f;
    }