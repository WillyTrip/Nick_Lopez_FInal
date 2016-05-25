runsaturn: rocketship.o saturn.o saturn_test.o
	g++ -Wall -g -o runsaturn rocketship.o saturn.o saturnTest.o

saturn: saturn.o
	g++ -Wall -g -c saturn.o
	
cinreader: CinReader.o
	g++ -Wall -g -c CinReader.o

rocketship.: rocketship.cpp rocketship.h
	g++ -Wall -g -c rocketship.cpp
	
saturnTest: saturn_test.cpp
	g++ -Wall -g -c saturn_test.cpp