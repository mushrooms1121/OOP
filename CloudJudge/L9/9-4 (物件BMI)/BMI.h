#ifndef BMI_H
#define BMI_H
#include <iomanip>

class BMI
{
public:
	BMI(double newWeight,double newHeight);
	double getBMI();
private:
	double weight, height;
};
#endif