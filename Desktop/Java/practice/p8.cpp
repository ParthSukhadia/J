// mul float numbers

 #include <iostream>
 using namespace std;
 float mul_floatnumbers(float a,float b) {return a * b; } 
  
int main(){
    float a,b,c  ;
cout<< "Give the first float numbers "<<endl;
cin>> a ;
cout<< "Give the first float numbers "<<endl;
cin>> b ;
 
c = mul_floatnumbers (a ,b) ;
cout<< c ;


return 0 ;
}
