#include<iostream>
#include<limits.h>//for int,char macros(macros are INT_MAX type of things)
#include<float.h> //for float,double macros
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Size of int "<< sizeof(int) <<" bytes"<<endl;
    cout<<"Range of int "<< INT_MIN <<" TO "<< INT_MAX <<endl;
    cout<<"Size of char "<< sizeof(char) <<" bytes"<<endl;
    cout<<"Size of long "<< sizeof(long) <<" bytes"<<endl;
    cout<<"Size of double "<< sizeof(double) <<" bytes"<<endl;
    cout<<"Size of unsigned char "<< sizeof(unsigned char) <<" bytes"<<endl;
    cout<<"Size of signed char "<< sizeof(signed char) <<" bytes"<<endl;
    return 0;
}
