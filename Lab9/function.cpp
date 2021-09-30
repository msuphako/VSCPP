#include <iostream>
int  power2( int );/*  function prototype  */
int main(){
    int  x= 1;
    while ( x <= 10){
        std::cout << power2(x)<< "\n";/* calling function */
        x = x + 1;
    }
return(0);
}
int  power2(int n)/*  Definition Function*/
{
    return(n * n);
}