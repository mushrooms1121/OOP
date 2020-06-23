#include"Person.h"

Person::Person(){
}
void Person::setName(string newName){
    name = newName;
}
void Person::setBirthday(Date newBirthday){
    birthday = newBirthday;
}
string Person::getName(){
    return name;
}
Date Person::getBirthday(){
    return birthday;
}