#include"Date.h"
#include"Person.h"
#include"Student.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    Student s1("Candy", 70, 100, Date(1999, 6, 1));
    Student s2("Spotlight", 89, 60, Date(1997, 10, 8));

    cout << fixed << setprecision(1);

    cout << s1.getName() << " " << s1.getBirthday().getYear() << "-"
        << s1.getBirthday().getMonth() << "-" << s1.getBirthday().getDay() << " "
        << s1.average() << endl;
    cout << s2.getName() << " " << s2.getBirthday().getYear() << "-"
        << s2.getBirthday().getMonth() << "-" << s2.getBirthday().getDay() << " "
        << s2.average() << endl;

    system("pause");
    return 0;
}