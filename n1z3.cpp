#include <iostream>
using namespace std;
float Volume(float x) {
   return (2.1817 * x * x * x);
}
int main(){
 float x;
 cout<<"Введите длину ребра икосадэра ";
 cin >> x;
 cout<<"Объем икосаэдра "<<Volume(x)<<endl;
   return 0;
}
