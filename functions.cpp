//Define input type
struct triangle {
	double l1;
	double l2;
	double l3;
	
} ;


double maximum(double *array, int n){
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] > max)
			max = array[i]	;
			std::cout << array[i] <<std::endl;
	} 

	return max;
};

