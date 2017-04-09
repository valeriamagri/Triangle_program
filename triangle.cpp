/* This program prints to screen if a triangle is equilateral, isosceles or scalene (or an error if the triangle cannot be built with the given three numbers).
 It asks for three input values which are the lenghts of the three sides.
 */

#include <iostream>
#include "functions.h"

int main() {
	
	triangle tr;

	// Read inputs and check they are positive numbers
	std::cout << "Insert the lengths of the 3 sides of the triangle:"<<std::endl;
	
	std::cin >> tr.l1 >> tr.l2 >> tr.l3;
	
	if (std::cin.fail()) {
		std::cout << "Error: you did not insert a number!" <<std::endl;
		return 1;
	}

	//Check if it is a triangle and identify the type
	if (tr.isTriangle()) {
		if (tr.isEquilateral()) {
			std::cout <<  "This triangle is equilateral."  <<std::endl;
		}
		else if (tr.isIsosceles()) {
			std::cout << "This triangle is isosceles." <<std::endl;
		}
		else if(tr.isScalene()) {
			std::cout << "This triangle is scalene." <<std::endl;
		}
		else {
			std::cout << "This is not possible! Check for errors in the program" <<std::endl;
			return 1;
			}
	}
	return 0;
}

