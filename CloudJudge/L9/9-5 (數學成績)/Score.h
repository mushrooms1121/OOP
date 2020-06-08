#ifndef Score_H
#define Score_H
#include <string>
using namespace std;

class Score
{
public:
	Score(string newName,int newMath);
	void setName(string newName);
	void setMath(int newMath);
	string getName();
	int getMath();
private:
	string name;
	int math;
};
#endif