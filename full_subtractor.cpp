//write a program in c++ for fullsutractor 
#include <iostream>

using namespace std;
void full_subtractor(int A,int B,int Bin){
    int difference =(A^B)^Bin ;
     int A1 =not(A);
    int B_out=A1&Bin|A1&B|B&Bin;
    cout<<"difference="<<difference<<endl;
    cout<<"B_out="<<B_out<<endl;
}
    //printing value
    int main (){
        int A=1;
        int B=0;
        int Bin =1;
        full_subtractor(A,B,Bin);
    return 0;
}
