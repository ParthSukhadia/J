#include<iostream>
#include <string>
using namespace std;

int main() {
    double num1,num2;
    string operation ;
    cout<< "Tell me yr 1st no."<<endl;
    cin>> num1;
    cout<< " Tell me yr 2nd no. "<<endl;
    cin>> num2;
    cout<< " Enter an operator (plus,minus,multiply,divide): "<<endl;
    cin>> operation;
    
     
     if      (operation == "plus" ){
    cout <<num1 <<" + " <<num2 << " = " <<num1+num2 <<endl;}
     else if (operation == "minus" ){
    cout <<num1 <<" - " <<num2 << " = "<<num1-num2 <<endl;}
     else if (operation == "multiply"){
    cout <<num1 <<" * " <<num2 << " = "<<num1*num2 <<endl;}
    if       (operation == "divide" ){
    cout<<num1 <<" / " <<num2 << " = "<<num1/num2 <<endl;}
    return 0;
     }
