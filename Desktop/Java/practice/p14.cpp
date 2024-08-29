#include <iostream>
 using namespace std;
int main(){
    int num = 1;
    int a;
    cout<< "no. of row"<<endl;
    cin>> a;

    for (int i = 1;i <= a; i++){
        cout<<"@";
      
        for (int j = 1;j <= i; j++) {
            cout<< num <<"@";
            num++;
        }
      cout<<endl ;
    
    }
return 0 ;
}