#include <iostream>
using namespace std;
int main(){
    int n,point_p1 = 0,point_p2 = 0;
    cout << "Enter total game : ";
    cin >> n;
   for(int i=1;i<=n;i++){
    cout << "=========================="<<endl;
    cout << "Round " << i <<endl;
        while(true){
            int p1,p2;
            cout << "1.hammer 2.scissor 3.paper" << endl;
            cout << "player 1 : " ;
            cin >> p1;
            cout << "player 2 : ";
            cin >> p2;
            cout << "=========================="<<endl;
            if(p1 == p2 ){
                cout << "draw!!" << endl;
            }else if(p1 == 1){
                if(p2 == 3){
                  cout << "player 2 win"<< endl;
                  point_p2++;
                  break;
                }
                else{
                  cout << "player 1 win"<< endl;
                  point_p1++;
                  break;
                }
            }else if(p1 == 3){
                if(p2 == 1){
                  cout << "player 1 win"<< endl;
                  point_p1++;
                  break;
                }
                  else{
                  cout << "player 2 win"<< endl;
                  point_p2++;
                  break;
                  }  

            }else if(p1 == 2){
                if(p2 == 3){
                  cout << "player 1 win"<< endl;
                  point_p1++;
                  break;
                }else{
                  cout << "player 2 win" << endl;
                  point_p2++;
                  break;
                }
            }
        }
        if(point_p1 == n*70/100){
            break;
        }
        if(point_p2 == n*70/100){
            break;
        }

    }
    cout << "=========================="<<endl;
    cout << "player 1 score : " << point_p1 <<endl;
    cout << "player 2 score : " << point_p2 <<endl;
    if(point_p1>point_p2){
        cout << "player 1 is the winner!!" <<endl;
    }else{
        cout << "player 2 is the winner!!" <<endl;
    }
}