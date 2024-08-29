#include <iostream>
 using namespace std;
int main(){

int a , i;
cout<< "Enter in no. of which table u want :"<<endl ;
cin>> a ;
for ( i = 1; i <= 12 ; ++i)
{
   cout<< a << "*" << i <<"=" << a*i <<endl ;
}

return 0 ;
}