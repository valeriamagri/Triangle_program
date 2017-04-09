triangle.o: triangle.cpp;
	g++ -Wall triangle.cpp -c 

functions.o: functions.cpp;
	g++ -Wall functions.cpp -c
	
compile:	triangle.o functions.o;
	g++ -Wall triangle.o functions.o -o triangle.x
	
run: triangle.x;
	./triangle.x	
	
clean: ;
	rm triangle.o functions.o
