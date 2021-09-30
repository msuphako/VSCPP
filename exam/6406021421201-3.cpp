#include <iostream>
using namespace std;
int main(){
    int sum_year=0,sum_month=0,sum_day=0;
    int day,month,year;
    int def_year=2513;
    cout << "Please enter day : "   ;
    cin >> day;
    cout << "Please enter month  : "  ;
    cin >> month;
    cout << "Please enter year : "  ;
    cin >> year;
    if(year>=2513 && year<=2599 && month >=1 && month <=12 && day >=1 && day <= 30){
        for(def_year;def_year<year;def_year++){
                sum_year++;
             }
                for(month;month > 1 ;month--){
                    sum_month++;
                }
                    for(day;day>1;day--){
                        sum_day++;
                    }
    }else{
        cout << "====================================" << endl;
        cout << "Error input date / month / year " << endl;
        cout << "|Day  |   1 - 30  |" << endl;
        cout << "|Month|   1 - 12  |" << endl;
        cout << "|Year |2513 - 2599|" << endl;
        cout << "====================================" << endl;
        return 0;
    }
    cout << "The difference is about "<< sum_year*30*12 + (sum_month*30) + sum_day << " days "<<endl;
    return 0;


}