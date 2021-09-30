#include <iostream>
using namespace std;
int main (){
    int score,std;
    int  i=1;
    while(i<=10){
        cout << "Enter student "<< i <<" : " ;
        cin >> score;
       if(score>=80){
		cout << "Grade A"<< endl ;
	    }
	    else if(score>=70) {
	    	cout << "Grade B"<< endl;
	    }
	    else if(score>=60) {
	    	cout << "Grade C"<< endl;
	    }
	    else if(score>=50) {
	    	cout << "Grade D"<< endl;
	    }
	    else if(score>=0) {
	    	cout << "Grade F"<< endl;
	    }
        i++;
    }

}