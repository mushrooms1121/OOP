#include "BMI.h"

BMI::BMI(double newWeight, double newHeight)
{
	weight = newWeight;
	height = newHeight;
}
double BMI::getBMI()
{
	return weight / (height * height);
}