//Swap Numbers 
#include <bits/stdc++.h>

 using namespace std;
int main(){

int a  , b ;
cout<< "give the first no. to swap"<<endl;
cin>> a ;
cout<< "give the second no. to swap"<<endl;
cin>> b ;
cout<< "Before swaping a = "<< a << " b = "<< b <<endl;

int temp ;
 temp = a;
 a = b ;
 b = temp ; 
 cout<< "After swaping a = "<< a << " b = "<< b <<endl;
return 0 ;

}