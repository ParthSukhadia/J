#include <iostream>
using namespace std;
int main(){
    int age ;
   cout << "Tell me yr age "<<endl;
    cin>> age;
   // if       ( age<18){
   //     cout<<"you cannot come to my party"<<endl; }
   // else if ( age == 18){
   //     cout<< "U R alloud in party"<<endl; }
   // else {
   //     cout<< "invited"<<endl ; }
   // return 0;

   switch (age)
   {
   case 18 :
   cout<<"You are 18"<<endl;
    break;
   case 22 :
   cout<<"You are 22"<<endl;
    break;
     case 2:
   cout<<"You are 2"<<endl;
    break;
   default:
   cout<< "no such cases"<<endl;
    break;
   }
}
