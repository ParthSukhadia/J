//simple intrest 

#include <iostream>
 using namespace std;
int main(){
  float   P , R, T ;

cout<< " Enter the principal amount "<<endl ;
cin>> P ;
cout<< " Enter the Rate of int "<<endl ;
cin>> R ;
cout<< " Enter the Time "<<endl ;
cin>> T ;
 
 float SI = ( P * T * R/ 100 );
 cout<< "This is yr simple intreat amt :"<< SI <<endl;
return 0 ;
}