#include <stdio.h>

int main(void) {
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if(grade >= 90 && grade <= 100)
		printf("Letter grade: %s\n", "A");
	else if(grade >= 80 && grade <= 89)
		printf("Letter grade: %s\n", "B");
	else if(grade >= 70 && grade <= 79)
		printf("Letter grade: %s\n", "C");
	else if(grade >= 60 && grade <= 69)
		printf("Letter grade: %s\n", "D");
	else 
		printf("Letter grade: %s\n", "F");
	return 0;
}