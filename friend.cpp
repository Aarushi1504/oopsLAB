#include <iostream>
using namespace std;
class complex{
    int real , imag;
    public:
    void getData(){
        cout<<"Enter the real and imaginary part: ";
        cin>>real>>imag;
    }
    friend complex add(complex c1, complex c2);
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }
};
    complex add(complex c1 , complex c2){
        complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }
    int main(){
        complex c1, c2,c3;
        c1.getData();
        c2.getData();
        c3=add(c1, c2);
        cout<<"sum = ";
        c3. display();
        return 0;
    }
