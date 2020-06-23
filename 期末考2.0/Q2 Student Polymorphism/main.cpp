#include"Date.h"
#include"Person.h"
#include"Student.h"
#include<iostream>
#include<iomanip>
using namespace std;

void display(Person& p){
    cout << p.toString();
}

int main() {
    Student s1("Candy", 70, 100, Date(1999, 6, 1));
    Student s2("Spotlight", 89, 60, Date(1997, 10, 8));

    display(s1);
    display(s2);

    system("pause");
    return 0;
}