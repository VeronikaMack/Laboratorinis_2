CXXFLAGS= -std=c++11 -Wc++11-extensions -O3
program: funkcijos.o v1.2.o mylib.h funkcijos.h
	g++  -o program funkcijos.o v1.2.o 

funkcijos.o: funkcijos.cpp funkcijos.h mylib.h
	g++ -c $(CXXFLAGS) funkcijos.cpp 

v1.0.o: v1.2.cpp funkcijos.h mylib.h
	g++ -c $(CXXFLAGS) v1.2.cpp 

clean:
	rm -f funkcijos.o v1.2.o program
