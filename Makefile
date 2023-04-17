program: funkcijos.o v1.0.o mylib.h funkcijos.h
	g++ -o program funkcijos.o v1.0.o 

funkcijos.o: funkcijos.cpp funkcijos.h mylib.h
	g++ -c funkcijos.cpp 

v1.0.o: v1.0.cpp funkcijos.h mylib.h
	g++ -c v1.0.cpp 

clean:
	rm -f funkcijos.o v1.0.o program