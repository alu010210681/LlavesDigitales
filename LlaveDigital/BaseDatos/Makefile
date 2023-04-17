CXX = g++
CXXFLAGS = -g -Wall -Wno-class-conversion
NAMEGLAGS = -o
SRC = main.cc
PROGRAM_NAME = middleware.out

make:
	$(CXX) $(CXXFLAGS) $(SRC) $(NAMEGLAGS) $(PROGRAM_NAME)

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -f $(PROGRAM_NAME) *.o
	rm -rf *~ basura b i