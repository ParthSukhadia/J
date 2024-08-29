// calc
#include <iostream>
 using namespace std;
int main(){

int a, b, c, n;
cout<<"Enter two numbers you want to make the operation of : "<<endl;
cin>> a >> b ;
cout<< "Enter the operation :" <<endl <<"1 = Addition, 2 = Subraction, 3 = Multiplication, 4 = Divide :" <<endl;
cin>> n ;

switch (n)
{
case 1 : c = a + b ;
    cout<< "Your ans is "<< c <<endl;
    break;
case 2 : c = a - b ;
    cout<< "Your ans is "<< c <<endl;
    break;
case 3 : c = a * b ;
    cout<< "Your ans is "<< c <<endl;
    break;
case 4 : c = a / b ;
    cout<< "Your ans is "<< c <<endl;
    break;
default:
    cout<< "You have entered the wrong operation "<<endl ;
    break;
}
return 0 ;
}