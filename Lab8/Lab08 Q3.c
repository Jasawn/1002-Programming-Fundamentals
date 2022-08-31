#include <stdio.h>

int main()
{
	int weight = 0;
	float height = 0, bmi = 0;

	printf("Enter your weight in kilograms: ");
	scanf_s("%d", &weight);
	printf("Enter your height in metres: ");
	scanf_s("%f", &height);

	bmi = weight / (height * height);
	
	if (bmi < 18.5)
	{
		printf("Your BMI is %2.1f. That is within the underweight range",bmi);
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		printf("Your BMI is %2.1f. That is within the normal range", bmi);
	}
	else if (bmi >= 25 && bmi < 30)
	{
		printf("Your BMI is %2.1f. That is within the overweight range", bmi);
	}
	else
	{
		printf("Your BMI is %2.1f. That is within the obese range", bmi);
	}
	return 0;
}