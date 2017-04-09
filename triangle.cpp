/* This program prints to screen if a triangle is equilater isoscel or scalene. It asks for three input values which are the lenghts of the three sides.
 */

#include <iostream>
#include <functions.h>

int main() {
	
	triangle tr;
	tr.l1 =0; 
	tr.l2 =0; 
	tr.l3 =0;

	// Read inputs and check they are numbers (can be transformed to read n numbers)
	std::cout << "Insert the lenghts of the 3 sides of the triangle:"<<std::endl;
		std::cin >> tr.l1 >> tr.l2 >> tr.l3;
		if (std::cin.fail()) {
			std::cout << "Error: you did not insert a number!" <<std::endl;
			return 1;
		}
		if (tr.l1<=0 || tr.l2<=0 || tr.l3<=0 ) {
			std::cout << "Error: length cannot be 0 or negative!" <<std::endl;
			return 1;
		}
		//std::cout << tr.l1 << " " << tr.l2 << " "  << tr.l3 << std::endl;

	//Check if it is a triangle (find longest side: it must be shorter than the sum of the other two)
	int max;
	double sides[] = {tr.l1, tr.l2, tr.l3};
	max = maximum(sides, 3);
	if (max >= (tr.l1+tr.l2+tr.l3 -max)) {
		std::cout << "Error: this is not a triangle!" <<std::endl;
		return 1;
	}	
	
	//Identify the type of triangle
	if(tr.l1 == tr.l2 && tr.l2  == tr.l3) {
	
		std::cout << "This triangle is equilater." <<std::endl;
	}
	
	
	else if (tr.l1 == tr.l2 || tr.l1 == tr.l3 || tr.l2 == tr.l3) {
	
		std::cout << "This triangle is isoscel." <<std::endl;
	}
	
	else {
	
		std::cout << "This triangle is scalene." <<std::endl;
	}
	
	return 0;
}

