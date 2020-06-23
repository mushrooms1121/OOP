#include"Student.h"

Student::Student(string newName, int newMathScore, int newChineseScore, Date newBirthday) {
    mathScore = newMathScore;
    chineseScore = newChineseScore;
    setName(newName);
    setBirthday(newBirthday);
}
void Student::setMathScore(int newMathScore) {
    mathScore = newMathScore;
}
void Student::setChineseScore(int newChineseScore) {
    chineseScore = newChineseScore;
}
int Student::getMathScore() {
    return mathScore;
}
int Student::getChineseScore() {
    return chineseScore;
}
double Student::average() {
    return (mathScore + chineseScore) / 2.0;
}
string Student::toString(){
    stringstream ss;
    ss << setprecision(1) << fixed;
    ss << getName() << " " << getBirthday().toString() << " " << average() << endl;
    return ss.str();
}
