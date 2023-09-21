#include <iostream>     
#include <limits>       
using namespace std;
int main () {
    cout<<numeric_limits<int>::max()<<endl; /* размер числа должен укладываться в 4 байта (целое число) */
    cout<<numeric_limits<int>::min()<<endl;
    
    cout<<numeric_limits<double>::max()<<endl; /*  размер числа должен укладываться в 8 байт  */
    cout<<numeric_limits<double>::min()<<endl;
    
    cout<<numeric_limits<bool>::max()<<endl; /* имеет только значения 0 и 1*/
    cout<<numeric_limits<bool>::min()<<endl;
    
    cout<<numeric_limits<long double>::max()<<endl; /*  размер числа от 8 до 16 байт */
    cout<<numeric_limits<long double>::min()<<endl;
     
    cout<<numeric_limits<short>::max()<<endl; /* размер числа должен укладываться в 2 байта */
    cout<<numeric_limits<short>::min()<<endl;
    
    cout<<numeric_limits<float>::max()<<endl; /* размер числа должен укладываться в 4 байта (число с плавающей точкой)*/
    cout<<numeric_limits<float>::min()<<endl;
    
}