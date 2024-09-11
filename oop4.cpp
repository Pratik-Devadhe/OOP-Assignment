/*
Design a C++ Class ‘Complex ‘ with data members for real and
imaginary part. Provide default and parameterized constructors.

Write a program to perform arithmetic operations of two complex
numbers using operator overloading (using either member
functions or friend functions).

*/
#include<iostream>
using namespace std;


class complex{

    int real;
    int img;
    public:
        // default constructor :
        complex(){
            int real = 0;
            int img = 0;
        }

    // parameterized constructor :

    complex(int r ,int i){
    int real = r;
    int img = i;
}

};



int main(){

complex s(5,9);


   
   
   
    return 0;

}