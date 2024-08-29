#include <iostream>
 using namespace std;
int main(){
    int a;
    cout<< "no. of row"<<endl;
    cin>> a;

    for (int i = 1;i <= a; i++){
        cout<<"@";
      
        for (int j = 1;j <= i; j++) {
            cout<< j <<"@";
        }
      cout<<endl ;
    
    }
return 0 ;
}