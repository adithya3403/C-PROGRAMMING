// Write program that declares Class awarded for a given percentage of marks, where mark = 70% = Distinction. Read percentage from standard input.
#include<stdio.h>
void main() {
	int a, b, c, d, e;
	float per;
	printf("Enter five subjects marks: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	per = (a + b + c + d + e) / 5.0;
	printf("Percentage = %.2f\n", per);
	if(per >= 70) 
		printf("Distinction");
	else if(per <=40 ) 
		printf("Failed");
	else if(per < 60 && per>40) 
		printf("Second Class");
	else if(per <= 70 && per>60) 
		printf("First Class");
}

// Enter five subjects marks: 90 80 85 95 100
// Percentage = 90.00
// Distinction