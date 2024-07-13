#include<iostream>
#include <string>
using namespace std;

   
   int main(){
    double num1,num2;
    string operation ;
    cout<< "Tell me yr 1st no."<<endl;
    cin>> num1;
     cout<< " Enter an operator (plus,minus,multiply,divide): "<<endl;
    cin>> operation;
    cout<< " Tell me yr 2nd no. "<<endl;
    cin>> num2;
   
       
    int op = -1 ;
         if (operation == "plus") op = 1;
    else if (operation == "minus") op  = 2;
    else if (operation == "multiply") op  = 3;
    else if (operation == "divide") op = 4;
     
    switch ( op ) 
    {
    case 1 :
       cout<<num1<<" + "<<num2<<" = "<<num1+num2 <<endl;
        break;
    case 2 :
    cout<<num1<<" - "<<num2<<" = "<<num1-num2 <<endl;
        break;
        case 3 :
    cout<<num1<<" * "<<num2<<" = "<<num1*num2 <<endl;
        break;
         case 4 :
    cout<<num1<<" / "<<num2<<" = "<<num1/num2 <<endl;
        break;
    default:
    cout<< "Error! Its a wrong operation ";
        break;
    }
    return 0;
   }