// maximum no.

#include <iostream>
 using namespace std;
int main(){
int a, b, c;
cout<<"Enter the first number"<<endl;
cin>> a ;
cout<<"Enter the second numbers"<<endl;
cin>> b ;
cout<<"Enter the third numbers"<<endl;
cin>> c ;
if (a>=b && a>=c ){
    cout<< "The first number you entered "<< a <<" was a greater number "<<endl; }
else if (b>=a && b>=c){
    cout<< "The second number you entered "<< b << " was a greater number " <<endl;}
else {
    cout<< "The third number you entered "<< c <<" was a greater number "<<endl; }
return 0 ;
}