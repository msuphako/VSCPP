#include<iostream>
using namespace std;

int main()
{
	int score;
	cout<< "Enter Score :  ";
	cin >> score;
	if(score>=80){
		cout << "Grade A";
	}
	else if(score>=70) {
		cout << "Grade B";
	}
	else if(score>=60) {
		cout << "Grade C";
	}
	else if(score>=50) {
		cout << "Grade D";
	}
	else if(score>=0) {
		cout << "Grade F";
	}
	return 0;			
}