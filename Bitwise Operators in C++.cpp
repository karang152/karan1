#include <iostream>
using namespace std;
int main () {
unsigned int a,b;  //a:60 = 0011 1100 and b:13 = 0000 1101
cout<< "Enter the value of a & b"<<endl;
cin >> a>>b;
int c = 0;
c = a & b;             // 12 = 0000 1100
cout << "Bitwise AND (&) - Value of c is : " << c << endl ;
c = a | b;             // 61 = 0011 1101
cout << "Bitwise OR (|) - Value of c is: " << c << endl ;
c = a ^ b;             // 49 = 0011 0001
cout << "Bitwise XOR (^) - Value of c is: " << c << endl ;
c = ~a;                // -61 = 1100 0011
int d =~b; 
cout << "Bitwise NOT (~) - Value of ~a is: " << c<<";  Value of ~b is: "<<d << endl ;
c = a << 2;            // 240 = 1111 0000
cout << "Left Shift (<<) operation - Value of c is: " << c << endl ;
c = a >> 2;            // 15 = 0000 1111
cout << "Right Shift (>>) operation - Value of c is: " << c << endl ;
return 0;
}
