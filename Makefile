CXXI = g++
CXXF1 = -std=c++11
CXXF2 = -Wall -ansi -g -O2


find: find.cpp
	g++ -std=c++11 -Wall -lboost_filesystem -lboost_system -g -O2 -o find find.cpp

ints: ints.o
	$(CXX) $(CXXF1) -o ints ints.cpp

strings: strings.o
	$(CXX) $(CXXF1) -o string strings.cpp

pointers: pointers.cpp
	$(CXX) $(CXXF1) -o pointers pointers.cpp

cout: cout.cpp
	$(CXX) $(CXXF1) -o cout cout.cpp

.PHONY: clean
clean:
	rm -f find
