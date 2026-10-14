#include <stdio.h>

double squareArea(double side) {
	return side * side;
}

int main(int argc, char *argv[]) {
	
	//basic usage of the function
	double sideLength = 2.0;
	double area = squareArea(sideLength);
	printf("Side Length = %.2lf\n", sideLength);
	printf("Area = %.2lf\n", area);

	//second call to the function with a different argument
	sideLength = 4.5;
	area = squareArea(sideLength);
	printf("Side Length = %.2lf\n", sideLength);
	printf("Area = %.2lf\n", area);

	//directly calling the function without storing the result in a variable
	sideLength = 5.0;
	printf("Side Length = %.2lf\n", sideLength);
        printf("Area = %.2lf\n", squareArea(sideLength));

	sideLength = 5.5;
	//calling the fuction again without storing the result ina variable
	squareArea(sideLength);
	printf("Side Length = %.2lf\n", sideLength);
        printf("Area = %.2lf\n", squareArea(sideLength));

	return 0;
}

