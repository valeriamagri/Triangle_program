#include <iostream>
#include "functions.h"


////Triangle class methods////

// Constructors
triangle::triangle() {
	l1 = 0;
	l2 = 0;
	l3 = 0;
	
}

triangle::triangle(double inp1, double inp2, double inp3) {
	l1 = inp1;
	l2 = inp2;
	l3 = inp3;
	
}

// Functions
bool triangle::isTriangle(){
	if (l1<=0 || l1 != l1 || l2<=0 || l2 != l2 || l3<=0 || l3 != l3) {
		std::cout << "Error: some of the lengths are not positive numbers!" <<std::endl;
		return 0;
	}
	int max;
	double sides[] = {l1, l2, l3};
	max = maximum(sides, 3);
	if (max >= (l1+l2+l3 - max)) {
		std::cout << "Error: this is not a triangle!" <<std::endl;
		return 0;
	}
	return 1;
}


bool triangle::isIsosceles() {

	if (l1 == l2 || l1 == l3 || l2 == l3) {
		return 1;
	}
	else
		return 0;
}
	
	
bool triangle::isEquilateral(){
	if(l1 == l2 && l2 == l3) {
		return 1;
	}
	else
		return 0;
}

	
bool triangle::isScalene(){
	if(l1 != l2 && l2 != l3){
		return 1;
	}
	return 0;
}



//// Other functions////

//Maximum: function for finding the maximum value in a given array of n numbers
double maximum(double *array, int n){
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] > max)
			max = array[i];
	}
	return max;
};

