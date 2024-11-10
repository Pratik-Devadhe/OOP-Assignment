/*

A hospital management system needs to streamline its operations by
organizing various types of personnel and services. The system should
manage different roles such as doctors, nurses, and administrative staff.
Create the Different classes like Person, Doctor ,Nurse, Administrate
Staff. Use the concept of Inheritance.

*/

#include<iostream>
using namespace std;

class Person {
    public:
    string name , add;
    int sal;
    virtual void accept() = 0;
    virtual void display() = 0;

};

class Doctor : public Person{
    public:
     void accept() {
        cout <<"Enter the name : ";
        cin >> name;

        cout <<"Enter the address : ";
        cin >> add;
        cout <<"Enter the salary: ";
        cin >> sal;

     }
     void display() {
        cout << "NAME :" << name << endl;
        cout << "ADDRESS: " << add << endl;
        cout << "SALARY: "  << sal << endl;
     }
};

class Nurse : public Person{
    public:
     void accept() {
        cout <<"Enter the name : ";
         cin >> name;
        cout <<"Enter the address : ";
        cin >> add;
        cout <<"Enter the salary: ";
        cin >> sal;

     }
     void display() {
        cout << "NAME :" << name << endl;
        cout << "ADDRESS: " << add << endl;
        cout << " SALARY: "  << sal << endl;
     }
};


class Ass : public Person{
    public:
     void accept() {
        cout <<"Enter the name : ";
        cin >> name;
        cout <<"Enter the address : ";
        cin >> add;
        cout <<"Enter the salary: ";
        cin >> sal;

     }
     void display() {
        cout << "NAME :" << name << endl;
        cout << "ADDRESS: " << add << endl;
        cout << "SALARY: "  << sal << endl;
     }
};


int main() {

Doctor d;
Nurse n;
Ass a;

int ch =2 , choice;
while(ch != 0 ){

    cout << "0.Exit\n";
    cout << "1. Enter the details of the Doctor\n";
    cout << "2. Enter the details of the Nurse\n";
    cout << "3. Enter the Details of the administrative staff\n";
    cout << "4. Display the details of the Doctor\n";
    cout << "5. Display the details of the Nurse\n";
    cout << "6. Display the details of the administrative staff\n";
    cin >> choice;
    switch (choice) {
        case 0:
                ch = 0;
                break;
       case 1: 
                d. accept();
                break;
        case 2: 
                n. accept();
                break;
        case 3: 
                a. accept();
                break;
        case 4: 
                d. display();
                break;
        case 5: 
                n. display();
                break;
        case 6: 
                a. display();
                break;
        default :
                cout <<"Wrong choice ! Please Enter again .\n";
                break;

    }

}


    return 0;

}