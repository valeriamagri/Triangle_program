triangle.o:	;
	g++ triangle.cpp -c 

functions.o:	;
	g++ functions.cpp -c
	
compile:	triangle.o functions.o;
	g++ triangle.o functions.o -o triangle.x
	
run: ;
	./triangle.x	
	
clean: ;
	rm triangle.o functions.o
