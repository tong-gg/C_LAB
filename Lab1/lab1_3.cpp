#include <stdio.h>
int main(){
	float preGrade = 1.75;
	int preCredit = 21;
	int credit = 18;
	float requiredGrade = 2.00;
	float creditSemester_one = preCredit * preGrade;
	float creditSemester_two = ((preCredit + credit) * requiredGrade) - creditSemester_one;
	float gradeFinal = creditSemester_two / credit;
	printf("The GPA this semester should be %.2f", gradeFinal);
	return 0; 
}
